
pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build') {
            steps {
                echo 'Compiling project with Makefile...'
                sh 'make'
            }
        }

        stage('Run') {
            steps {
                echo 'Running the binary...'
                sh './app'
            }
        }
    }

    post {
        success {
            archiveArtifacts artifacts: 'app', fingerprint: true
            echo 'Build succeeded.'
        }
        failure {
            echo 'Build failed.'
        }
    }
}
