#include<iostream>
using namespace std;
#define SIZE 2
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
int i=0,j=0;
class bookInformation{
  protected:
  int bookQuantity;
  int bookId;
  private:
  string  bookTitle;
  string author,status;
  public:
  void setStatus(string status)
  {
    this->status=status;
  }
  void setBookQuantity( int bookQuantity)
  {
    this->bookQuantity=bookQuantity;
  }
  void setBookId(int bookId)
  {
    this->bookId=bookId;
  }
  void setBookTitle(string bookTitle )
  {
    this->bookTitle=bookTitle;
  }
  void setAuthor(string author )
  {
    this->author=author;
  }
  // for showing data
  int getBookQuantity()
  {
    return bookQuantity;
  }
  int getBookId(){
    return bookId;
  }
  string getBookTitle()
  {
    return bookTitle;
  }
  string  getAuthor()
  {
    return author;
  }

    string getStatus()
    {
      return status;
    }
};

  bookInformation bookinfor[10];
  void putDataToBook(){
    int bookId,bookqty;
    string bookTitle,author,status;
    cout<<"Enter book's id:"<<endl;
    cin>>bookId;
    cout<<"Enter book's title"<<endl;fflush(stdin);
    getline(cin,bookTitle);
    cout<<"Enter book quantity:"<<endl;
    cin>>bookqty;
    cout<<"Enter author's name:"<<endl;fflush(stdin);
    getline(cin,author);
    cout<<"Enter status:"<<endl;cin>>status;
  // Assign the values to the array objects
   bookinfor[i].setBookTitle(bookTitle);
   bookinfor[i].setBookQuantity(bookqty);
   bookinfor[i].setBookId(bookId);
   bookinfor[i].setAuthor(author);
   bookinfor[i].setStatus(status);
   i++;

  }

  void showBookData()
  {   int amount;
    for(amount=0;amount<i;amount++)
    {cout<<YELLOW;
     
     cout<<endl<<"Book'id:"<< bookinfor[amount].getBookId()<<endl;
     cout<<"Title:"<< bookinfor[amount].getBookTitle()<<endl;
     cout<<"Quantity:"<< bookinfor[amount].getBookQuantity()<<endl;
     cout<<"Author:"<< bookinfor[amount].getAuthor()<<endl;
     cout<<"Status:"<<bookinfor[amount].getStatus()<<endl;
     

    }
  }
  


class readerInformation{
  protected:
  int readerId;
  private:
  string name,sex,address,date;
  int phone;
  public:
  void setPhone(int phone)
  {
        this->phone=phone;
  }
  void setReaderId(int readerId)
  {
      this->readerId=readerId;
  }
  void setName(string name)
  {
    this->name=name;
  }
  void setSex(string sex)
  {
    this->sex=sex;
  }
  void setAddress(string address )
  {
      this->address=address;
  }
  void setDate(string date)
  {
    this->date=date;
  }
  // get data
  int setPhone()
  {
    return phone;
  }
  int getReaderId()
  {
    return readerId;
  }
  string getName()
  {
    return name;
  }
  string getSex()
  {
    return sex;
  }
  string getAddress()
  {
    return address;
  }
  string getDate()
  {
    return date;
  }

};
class BorrowOrReturn:public bookInformation,public readerInformation{

  private:
  string status;
  public:
  void setStatus(string status)
  {
      this->status=status;
  }
  string getStatu()
  {
    return status;
  }


};
// object for borrow and return book 
BorrowOrReturn borrow[10];
void putDataToborrow()
{
    int readerId,bookId,bookqty;
    string status,date;
    cout<<"Enter book id:"<<endl;cin>>bookId;
    cout<<"Enter reader id"<<endl;cin>>readerId;
    cout<<"Enter book quantity:"<<endl;cin>>bookqty;
    cout<<"Enter the date:"<<endl;cin>>date;

    borrow[j].setBookId(bookId);
    borrow[j].setReaderId(readerId);
    borrow[j].setBookQuantity(bookqty);
    borrow[j].setDate(date);
    j++;
    
}
   void compare()
   {
     int index;
     for(index=0;index<i;index++)
     {
     if(bookinfor[index].getBookId()==borrow[index].getBookId())

      bookinfor[index].setStatus("someone have already borrowed");

     }

   }

int main()
{
  cout<<"\x1B[2J\x1B[H";
  int option;

  do {
    
      cout<<BLUE;
      cout<<"1.Enter the book information"<<endl;
      cout<<"2.Borrow and return section"<<endl;
      cout<<"3.See list of book"<<endl;
      cout<<"4.exit the program"<<endl;
      cin>>option;

  switch(option)
  {
    case 1:
          putDataToBook();
         
    break;

    case 2:
            putDataToborrow();
            compare();
    break;
     
    case 3:

     showBookData();
      
    break;
    case 4:
    cout<<"thank you so much"<<endl;
    break;

  }

  }while(option!=4);
 



  return  0;
}