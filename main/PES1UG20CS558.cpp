pipeline{
    agent any
    stages{
        stage('Build'){
            steps{
                sh 'g++ -c PES1UG20CS558.cpp'
                sh 'g++ -o PES1UG20CS558 PES1UG20CS558.cpp'
                echo 'build stage successfull'
            }
        }
        stage('Test'){
            steps{
                sh './PES1UG20CS558'
                echo 'Test stage executed successfully'
            }
        }
        stage('Deploy'){
            steps{
                echo 'Deployed successfully'
            }
        }
    }
    post{
        failure{
            echo 'Pipeline Failed'
        }
    }
}