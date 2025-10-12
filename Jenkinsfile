pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/Nshravankumar4/GitHub_CPP_CMake_Build.git'
            }
        }

        stage('Setup') {
            steps {
                script {
                    if (isUnix()) {
                        sh 'echo "No setup script for Unix yet"'
                    } else {
                        // Run the Windows batch setup script
                        def status = bat(script: 'Scripts\\Setup_Repo.bat main', returnStatus: true)
                        if (status != 0) {
                            error "Setup script failed on branch main"
                        }
                    }
                }
            }
        }

        stage('Build') {
            steps {
                script {
                    if (isUnix()) {
                        sh '''
                        mkdir -p build
                        cd build
                        cmake .. -DCMAKE_BUILD_TYPE=Release
                        cmake --build . --config Release
                        '''
                    } else {
                        bat '''
                        mkdir build
                        cd build
                        cmake .. -DCMAKE_BUILD_TYPE=Release
                        cmake --build . --config Release
                        '''
                    }
                }
            }
        }

        stage('Run Main App') {
            steps {
                script {
                    if (isUnix()) {
                        sh './build/app'
                    } else {
                        bat 'build\\Release\\app.exe'
                    }
                }
            }
        }

        stage('Run Tests') {
            steps {
                script {
                    if (isUnix()) {
                        sh '''
                        cd build
                        ctest --output-on-failure
                        '''
                    } else {
                        // Run all tests via CTest on Windows
                        bat 'cd build && ctest --output-on-failure -C Release'
                    }
                }
            }
        }
    }

    post {
        always {
            script {
                if (isUnix()) {
                    archiveArtifacts artifacts: 'build/app', allowEmptyArchive: false
                } else {
                    archiveArtifacts artifacts: 'build\\Release\\app.exe', allowEmptyArchive: false
                }
            }
        }
        success {
            echo "Setup, build, run, and tests succeeded"
        }
        failure {
            echo "Setup, build, run, or tests failed"
        }
    }
}
