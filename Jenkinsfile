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
                        // If you have a Linux/Mac setup script, you can call it here
                        sh 'echo "No setup script for Unix yet"'
                    } else {
                        // Run the Windows batch setup script
                        bat 'Script\\setuprepo.bat'
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

        stage('Run') {
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

        stage('Test') {
            steps {
                script {
                    if (isUnix()) {
                        sh '''
                        cd build
                        ctest --output-on-failure
                        '''
                    } else {
                        bat '''
                        cd build\\tests\\Release
                        runTests.exe
                        '''
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
