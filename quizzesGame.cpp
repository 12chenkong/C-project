#include<iostream>
#include<ctime>
using namespace std;
void displayFeedback(bool iscorrect)
{
    if(iscorrect)
    {
        cout<<"Correct! well done"<<endl;
    }
    else
    cout<<"Incorrect! better luck next time"<<endl;
}
int askQuestion(string question,string option1,string option2,string optionn3,int correctAnswer)
{
    int yourAnswer;
    cout<<"======Question======="<<endl;
    cout<<question<<" "<<endl;
    cout<<"1. "<<option1<<endl;
    cout<<"2. "<<option2<<endl;
    cout<<"3. "<<optionn3<<endl;
    cout<<"Enter your answer:"<<endl;
    cin>>yourAnswer;
    bool isTrue=(yourAnswer==correctAnswer)?1:0;
    displayFeedback(isTrue);
    return isTrue;


}
int main()
{   
    int score=0;
    string name;
    cout<<"Enter your name here:"<<endl;
    cin>>name;
    score+=askQuestion("What is the capital city of Cambodia","Bangkok","jakata","Phnom Phenh",3);
    score+=askQuestion("Which programming language writted in Java","Java","C++","Phython",2);
    score+=askQuestion("what is the capital city of frence","Berlin","Paris","Madrid",2);
    cout<<"Dear "<<name<<":"<<" here is your total socres :"<<score<<endl;


   
    return 0;
}