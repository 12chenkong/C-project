#include<iostream>
#include<iomanip>
#include <stdlib.h>
#include<conio.h>
using namespace std;
#define SIZE 2
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

void typeOperation()
{
                cout<<setw(18);
                cout<<GREEN<<"1.Add two matrix"<<endl;
                cout<<setw(18);
                cout<<RED<<"2.Subtract two matrix"<<endl;
                cout<<setw(18);
                cout<<YELLOW<<"3.Multiply two matrix"<<endl;
                cout<<setw(18);
                cout<<MAGENTA<<"4.Perform scalar matrix multiplication"<<endl;
                cout<<setw(18);
                cout<<CYAN <<"5.Check whether two matrixs are equal  or not"<<endl;
                cout<<setw(18);
                cout<<CYAN<<"6.Exit the program"<<endl;

              
}
// Menu for user to choose
void  opt()
{
  cout<<GREEN<<"*******************************************"<<endl;
  cout<<GREEN<<"*******************************************"<<endl;
  cout<<GREEN<<"**                                       **"<<endl;
  cout<<YELLOW<<"**       WELCOME TO THE  MATRIX APP      **"<<endl;
  cout<<BLUE<<"**                                        **"<<endl;
  cout<<BLUE<<"*******************************************"<<endl;
  cout<<BLUE<<"*******************************************"<<endl;
}
// this function tell our user how to use the matrix app if the user just start using the app
void instructon() 
{
   cout<<GREEN<<"WELCOME COME  TO OUR INSTRUCTON ON HOW TO USE MATRIX APP"<<endl;
   cout<<YELLOW<<"  1.Addition   "<<endl;
   cout<<"           .Choose  any options you want "<<endl;
   cout<<"           .Enter the elements to the matrix when prompted "<<endl;
   cout<<"           .The program will dispay the result"<<endl;
   cout<<"           .For other options is alos the same!! enjoy!!!"<<endl;
  
}
//  mutiplelevel inheritance!
class getInput{
  public:
  int A[SIZE][SIZE];
  int B[SIZE][SIZE];
  int i,j;
  public:
  void getElement()
  {
      cout<<"Enter elements to the first matrix 3x3:"<<endl;
    for(i=0;i<SIZE;i++)
    {
      for(j=0;j<SIZE;j++)
      {
     cin>> A[i][j];
      }
    }

        cout<<"Enter elements to the second matrix 3x3:"<<endl;
        for(i=0;i<SIZE;i++)
        {
          for(j=0;j<SIZE;j++)
          {
          cin>> B[i][j];
          }
      }
  }



};
  // class for sumataton matrix

    class sumation:public getInput{
    public:
    void sumMatrix()
    {
      
      int C[SIZE][SIZE];
      int i,j;
      // perform sumation on these 2 matrixs
      for(i=0;i<SIZE;i++)
      {
        for(j=0;j<SIZE;j++)
        {
      C[i][j]=A[i][j]+B[i][j];
     
      }
      }

      // print out the resutl
      cout<<YELLOW;
      cout<<"Here is the result:"<<endl;
        for(i=0;i<SIZE;i++)
        {
          for(j=0;j<SIZE;j++)
          {
          cout<<C[i][j]<<" ";
          }
          cout<<endl;
          
        }

    }

  };
  // class for  matrix substraction 
  // take the number and time it with matrix is insdide substraction also
  class substractoin:public getInput {
    public:
    void subMatrix()
    {
      
      int C[SIZE][SIZE];
      int i,j;
      // perform sumation on these 2 matrixs
      for(i=0;i<SIZE;i++)
      {
        for(j=0;j<SIZE;j++)
        {
      C[i][j]=A[i][j]-B[i][j];
     
    }
  }

    // print out the resutl
    cout<<"Here is the result:"<<endl;
      for(i=0;i<SIZE;i++)
      {
        for(j=0;j<SIZE;j++)
        {
        cout<<C[i][j]<<" ";
        }
        cout<<endl;
      
    }

}

  void multipleBy()
  {
    int i,j;
    int A[SIZE][SIZE]; 
    int B[SIZE][SIZE];
    int num;
    cout<<"Enter number to multiply with matrix:"<<endl;
    cin>>num;
    cout<<"Enter elements to the matrix:"<<endl;
    for(i=0;i<SIZE;i++)
    {
      for(j=0;j<SIZE;j++)
      {
       cin>>A[i][j];
      }
    }
    // print out
    for(i=0;i<SIZE;i++)
    {
      for(j=0;j<SIZE;j++)
      {
        cout<<A[i][j]*num<<" ";
      }
      cout<<endl;
    }



    
  }



  };

class multiplication:public getInput{
  public:
  void mulMatrix()
  {
    int C[SIZE][SIZE];
    int row,col;
    int sum;
    // Perforom multiplication
    for(row=0;row<SIZE;row++)
    {
        for(col=0;col<SIZE;col++)
        {
            sum=0;

            for(int i=0;i<SIZE;i++)
            {
                sum+=A[row][i]*B[i][col];
            }
            C[row][col]=sum;
        }

    }
    // print out the result
    cout<<"Here is the result:"<<endl;
    for(row=0;row<SIZE;row++)
    {
      for(col=0;col<SIZE;col++)
      {
        cout<<C[row][col]<<" ";
      }
      cout<<endl;
    }


  }

};
// sum of main diagonal elements of a matrix  is inside equalMatrix also
class equalMatrix:public getInput{
  public:
  void equal()
  {
    int row,col;
    int flag=0;
    for(row=0;row<SIZE;row++)
    {
      for(col=0;col<SIZE;col++)
      {
          if(A[row][col]!=B[row][col])
          {
            flag=2;
            break;
          }
      }
    }
    if(flag==0)
    {
      cout<<"Both matrix are equal to each other!!"<<endl;
    }
    else 
    cout<<" both matrixs are not equal "<<endl;



  }

};

int main()
// clear the defualt text on the console

 {    
  cout<<"\x1B[2J\x1B[H";
  int op;
  
  

    do{
      cout<<BLUE;
      cout<<"1.Read instructon before using "<<endl;
      cout<<"2.Use the App now"<<endl;
      cout<<"3.Exit the APP now"<<endl;
      cout<<"pick the options below:"<<endl;
      cin>>op;
      // system("cls");
      
     
      switch(op)
      {
        case 1:
                 instructon();
        break;
        case 2:
                int option;
                do{
                        typeOperation();
                        cout<<"Enter your choice please:"<<endl;
                        cin>>option;

                        switch(option)
                        {
                          case 1:
                                  sumation obj;
                                  obj.getElement();
                                  obj.sumMatrix();
                                  
                          break;
                          case 2:
                                substractoin sub;
                                sub.getElement();
                                sub.subMatrix();    
                                
                          break;
                          case 3:
                                 multiplication mul;
                                 mul.getElement();
                                 mul.mulMatrix();
                          break;
                          case 4:
                                substractoin mulBy;
                                mulBy.multipleBy();
                          break;
                          case 5:
                                equalMatrix e;
                                e.getElement();
                                e.equal();


                          break;
                          case 6:

                            cout<<"Thanks for using option 2"<<endl; 
                          break;
                          default:
                          cout<<"Invalid input Please try again !!!"<<endl;

                        }           
                }while(option!=6);
     
        break;
        case 3:
          cout<<"Thanks for using our APP!!"<<endl;
        break;
      }

    }while(op!=3);

  
  return 0;
}