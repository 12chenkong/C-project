#include<iostream>
#include<string>
using namespace std;
class List{
  public:
  int id;
  string name;
  int price;
   
};
int main()
{
  string name;
  string addres;
  int totolItem;
  cout<<"Enter your name:"<<endl;
  cin>>name;
  cout<<"Enter your addres:"<<endl;
  cin>>addres;
  cout<<"Enter totol item:"<<endl;
  cin>>totolItem;
  List l[totolItem];
  for(int i=0;i<totolItem;i++)
  {   l[i].id=(i+1);
      cout<<"Enter product name:"<<endl;
      cin>>l[i].name;
      cout<<"Enter product price:"<<endl;
      cin>>l[i].price;
  }

  return 0;
}