#include<iostream>
#include<time.h>
#include <cstdlib>
#include<stdlib.h>
using namespace std;
#define SIZE 2
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

  int AmountOfTime;
  int totalScore=0;
   class score{
  public:
   int correct=0;
   int Incorrect=0;
   int outOfRang=0;
  int CalculateScore()
  {
    return correct-Incorrect;
  }
};
  score obj;
  
void guessing()
{
  while(true)
  {

        srand(time(NULL));
        int luckyNumber=rand() % 10 + 1;
        int guess;
        string result;
        cout<<"Enter the number between 1 to 10 in order to guess:"<<endl;
        cin>>guess;
      if(guess<1 || guess>10)
      { 
        obj.outOfRang=obj.outOfRang+1;
        cout<<"Incorrect guess. The number must be within the range of 1 to 10."<<endl;
        break;
        
      }
   else
      {
        if(luckyNumber==guess)
        {
            cout<<"YOU GUESSED right!!"<<endl;
            obj.correct++;
          break;
        }
        else 
        {
          cout<<"SORRY! THAT'N NOT RIGHT "<<endl;
            obj.Incorrect++;
          break;
        
        }
      
  }

  }
}
  int main()
  { 
    cout<<"\x1B[2J\x1B[H";
    int option;
    cout<<GREEN;
    cout<<"-----------------------"<<endl;
    cout<<"!!!WELCOME TO THE GAME!!!"<<endl;
    cout<<"------------------------"<<endl;
    
  do{
    cout<<YELLOW;
    cout<<"1.Play game now "<<endl;
    cout<<"2.See your scores"<<endl;
    cout<<"3.Exit the program"<<endl;
    cin>>option;
    switch(option)
    {
      case 1:
      {
        	cout<<"How many times you want play:"<<endl;
          cin>>AmountOfTime;
          int outOfBound=AmountOfTime;
          system("cls");
          for(int i=1;i<=(AmountOfTime);i++)
          {
            guessing();
            cout<<YELLOW;
            
          }
      }
      
      break;
      case 2:
          cout<<MAGENTA;
          cout<<"Correct:"<<obj.correct<<endl;
          cout<<"Incorrect:"<<obj.Incorrect<<endl;
          cout<<"Out of range:"<<obj.outOfRang<<endl;
          cout<<"Here is your total score:"<<obj.CalculateScore()<<endl;
          break;
      case 3:
      cout<<"Exit the program"<<endl;
      break;
      default:
      cout<<"Invalid input"<<endl;
    }

  }while(option!=3);
  
  return 0;
}  