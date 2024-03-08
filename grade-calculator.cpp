#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
    int math,english,chemisty,khmer,sport;
    int totolScore;
    double average;
    string name;
    public:
    // For accepting the socres of students
    void getInfo();
    // show the info of studnt's scores
    void showInfo();
    // say someting to student
    string saySomething(int x);
    
    
};
  void Student::getInfo()
  { cout<<"Enter Student's name:"<<endl;
    cin>>name;
    cout<<"Enter your math's score:"<<endl;
    cin>>math;
    cout<<"Enter your khmer's score:"<<endl;
    cin>>khmer;
    cout<<"Enter your english's score:"<<endl;
    cin>>english;
    cout<<"Enter your sport's scores:"<<endl;
    cin>>sport;
    cout<<"Enter your chemisty's score:"<<endl;
    cin>>chemisty;
  }

  void Student::showInfo()
  { cout<<"Here is your totol score and average:"<<endl;
    totolScore=(math+khmer+english+sport+chemisty);
    average=totolScore/5.0;
    cout<<"Total score:"<<totolScore<<"   "<<"Average:"<<average<<endl;
    string result;
    int is_true;
    // calculate student's grade 
    if(average>=90)
    {
      result="A";
      is_true=0;
      
    }
    else if(average>=80 && average<90)
    {
      result="B";
       is_true=0;
    }
    else if(average>=70 && average<80)
    {
      result="C";
       is_true=0;
       
    }
    else if(average>=60 && average<70)
    {
      result="D";
       is_true=0;
    }
    else {
      result="F";
       is_true=1;
    }
    

    cout<<saySomething(is_true)<<" This is your final grade:"<<result;
    
  }
   string  Student:: saySomething(int x){

    if(!x)
    {
      return "Congrat and Well done!!";
    }
     else{
      return "Sorry try your best next time";
     }
   }
  
int main()
{
  Student obj;
  obj.getInfo();
  obj.showInfo();
  return 0;
}