#include<iostream>
using namespace std;
class Program{
    string question;
    string opt1;
    string opt2;
     string opt3;
    int isCorrect;
    public:
   Program(string question,string opt1,string opt2,string opt3,int correctAnswer )
   {
    this->question=question;
    this->opt1=opt1;
    this->opt2=opt2;
    this->opt3=opt3;
    this->isCorrect=correctAnswer;

   }
   void displayFeedback( bool feed)
   {
     if(feed)
     {
        cout<<"That's correct!Well done!!"<<endl;
     }
     else
       cout<<"Incorrect! better luck later"<<endl;
   }
   int show()
   {
    int yourAnswer;
    bool feed;
     cout<<"========Question============="<<endl;
     cout<<question<<endl;
     cout<<"1. "<<opt1<<endl;
     cout<<"2. "<<opt2<<endl;
     cout<<"3. "<<opt3<<endl;
     cout<<"Enter you answer :"<<endl;
     cin>>yourAnswer;
     feed=(yourAnswer==isCorrect)?1:0;
     displayFeedback(feed);

     return feed;
   }
   
    

};
void choose()
{
    cout<<"1.Programming lanuage"<<endl;
    cout<<"2. Famouse Tech Person "<<endl;
    cout<<"3. Exit the program  "<<endl;
}
void objectOfProgram()
{   
    string name;
    cout<<"Enter your name to play game :"<<endl;
    // getline(cin,name);
    cin>>name;
    int score=0;
    Program code[5]={
        {"What HTML stand for ","Hyper Text Markup lanuage","Hyper Text Machine lanuage","Hyper Text Makup lanuage",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2}

    };
    for(int i=0;i<2;i++)
    { 
        score+=code[i].show();
    }
    cout<<"Dear "<<name<<" Here is your total score:"<<score<<endl;
}

void objectOfPerons()
{
    string name;
    cout<<"Enter your name to play game :"<<endl;
    // getline(cin,name);
    cin>>name;
    int score=0;
    Program code[5]={
        {"What HTML stand for ","Hyper Text Markup lanuage","Hyper Text Machine lanuage","Hyper Text Makup lanuage",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2}

    };
    for(int i=0;i<2;i++)
    { 
        score+=code[i].show();
    }
    cout<<"Dear "<<name<<" Here is your total score:"<<score<<endl;

}
void carQuestion()
{

    string name;
    cout<<"Enter your name to play game :"<<endl;
    // getline(cin,name);
    cin>>name;
    int score=0;
    Program code[5]={
        {"What HTML stand for ","Hyper Text Markup lanuage","Hyper Text Machine lanuage","Hyper Text Makup lanuage",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2},
        {"What is tejrjr","ufifif","ririi","rrir",2}

    };
    for(int i=0;i<2;i++)
    { 
        score+=code[i].show();
    }
    cout<<"Dear "<<name<<" Here is your total score:"<<score<<endl;
}


int main()
{
    int option;
    cout<<"==============Welcome to our qizz game=============="<<endl<<endl<<endl;
    cout<<"Please choose type of quizzes that you want to play:"<<endl;
   

   do{
        cout<<"1.Programming lanuage"<<endl;
        cout<<"2.Famouse Tech Person"<<endl;
        cout<<"3.Car "<<endl;
        cout<<"4.Exit the program"<<endl;
        cout<<"================================"<<endl;
        cout<<"Please pic up the option:"<<endl;
        cin>>option;
        
        
        switch (option)
        {
        case 1:
             objectOfProgram();
            break;
        case 2:
                objectOfPerons();
            break;
    
        case 3: 
                carQuestion();
        
         break;
         case 4:
                cout<<"Exit the program"<<endl;
                break;
        
        default:
            cout<<"Invalid input please try again !!"<<endl;
            break;
        }


   }while(option!=4);
   
    return 0;
}