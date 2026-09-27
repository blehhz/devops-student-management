pipeline {
    agent any

    stages {

        stage('Checkout') {
            steps {
                echo 'Checking out source code...'
            }
        }

        stage('Build') {
            steps {
                echo 'Building application...'
                sh 'make clean'
                sh 'make'
            }
        }

        stage('Test') {
            steps {
                echo 'Running automated tests...'
                sh 'make test'
            }
        }

        stage('Archive') {
            steps {
                archiveArtifacts artifacts: 'student-manager',
                             fingerprint: true
            }
        }
    }

    post {
        success {
            echo 'BUILD SUCCESSFUL!'
        }

        failure {
            echo 'BUILD FAILED!'
        }
    }
}