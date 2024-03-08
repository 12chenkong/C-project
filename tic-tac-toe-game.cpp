#include<iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;
#define SIZE 2
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

  char arr[3][3];
  const char PALYER='X';
  const char COMPUTER='O';

// print space to each of every element in 2D array
  void resetBoard()
    { 
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
              arr[i][j]=' ';
            }
        }

    }
// Print 3x3 grid to the user to play
    void printBoard()
    {
       cout<<"YELLOW"<<endl;
       cout<<""<<arr[0][0]<<" "<<"|"<<""<<arr[0][1]<<" "<<"|"<<" "<<arr[0][2]<<" "<<endl;
       cout<<"__|__|_ _"<<endl;
       cout<<""<<arr[1][0]<<" "<<"|"<<""<<arr[1][1]<<" "<<"|"<<" "<<arr[1][2]<<" "<<endl;
       cout<<"__|__|_ _"<<endl;
       cout<<""<<arr[2][0]<<" "<<"|"<<""<<arr[2][1]<<" "<<"|"<<" "<<arr[2][2]<<" "<<endl;
       cout<<"  |  |   "<<endl;

    }
    
    int checkFreeSpace()
    {
      int freeSpace=9;
      int i,j;
      for(i=0;i<3;i++)
      {
         for(j=0;j<3;j++)
          {
            if(arr[i][j]!=' ')
            {
              freeSpace=freeSpace-1;
            }
          }
      }

      return freeSpace;
    }

    void playerMove()
    {
            int x,y;
      do{   
            cout<<RED<<endl;
            cout<<"Enter row number #(1-3) "<<endl;
            cin>>x;
            x--;
            cout<<"Enter column number #(1-3) "<<endl;
            cin>>y;
            y--;
            
            if(arr[x][y]!=' ')
            {
              cout<<"Invalid move"<<endl;
            }
            else{
               cout<<CYAN<<endl;
                arr[x][y]=PALYER;
                break;
            }


      }while(arr[x][y]!=' ');
      
    }

    char checkWinner()
    {
      // check the row in the 3x3 grid 
      int i;
      for(i=0;i<3;i++)
      {
        if(arr[i][0]==arr[i][1] && arr[0][i]==arr[i][2])
        {
          return arr[i][0];
        }
      }
      // check for the columns
      for(i=0;i<3;i++)
      {
        if(arr[0][i]==arr[1][i] && arr[i][0]==arr[2][i])
        {
          return arr[0][i];
        }
      }
      // check for diagonals
      if(arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2])
      {
        return arr[0][0];
      }
      if(arr[2][0]==arr[1][1] && arr[2][0]==arr[0][2])
      {
        return arr[2][0];
      }

      return ' ';

    }
    // computer picks the number and than play with us
    void computerMove()
    {
       srand(time(NULL));
      int x;
      int y;
      if(checkFreeSpace>0)
      {
        
        do{

          x=rand()%3;
          y=rand()%3;

        }while(arr[x][y]!=' ');
        arr[x][y]=COMPUTER;
      }
      
     
    }

    
  int main()
  {
    cout<<"\x1B[2J\x1B[H";
    char winner=' ';
    resetBoard();
    do
    {
      printBoard();
      playerMove();
      computerMove();
      winner=checkWinner();
      

    }while(winner==' ' && checkFreeSpace()!=0);
    
    if(winner=='X')
    {
      printBoard();
      cout<<"You Win!!"<<endl;
    }
    else if(winner=='O')
    {
      printBoard();
      cout<<"You lose!!"<<endl;
    }
    else{
      printBoard();
      cout<<"It's a tie"<<endl;
    }
   
    return 0;
  }
