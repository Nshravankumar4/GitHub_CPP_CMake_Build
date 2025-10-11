pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/Nshravankumar4/cpp-cmake-ci-demo.git'
            }
        }

        stage('Build') {
            steps {
                script {
                    if (isUnix()) {
                        sh '''
                        mkdir -p build
                        cd build
                        cmake ..
                        cmake --build . --config Release
                        '''
                    } else {
                        bat '''
                        mkdir build
                        cd build
                        cmake ..
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
            echo "Build and run succeeded"
        }
        failure {
            echo "Build or run failed"
        }
    }
}
