Jenkinsfile (Declarative Pipeline)
pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'make' 
                cloc --by-file --xml --out=clocfiles/cloc.xml .
            }
        }
        stage ("Publish reports") {
            sloccountPublish encoding: '', pattern: '**/clocfiles/cloc.xml'
        }
    }
}
