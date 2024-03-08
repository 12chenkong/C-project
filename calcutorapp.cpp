#include<iostream>
using namespace std;
double add(double a,double b)
{
    return a+b;
}
double subsract(double a,double b)
{
    return a-b;
}
double division(double a,double b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    return 0.0;
}
double multiply(double a,double b)
{
    return a*b;
}


int main()
{
    
    cout<<"Welcome to Calcular app"<<endl;
    int num1,num2,option;
        
    do {
        cout << "************************" << endl;
        cout << "Please choose one of the numbers below: " << endl;
        cout<<"1.addition"<<endl;
        cout<<"2.abstractioin"<<endl;
        cout<<"3.division"<<endl;
        cout<<"4.Multiplycation"<<endl;
        cout<<"5.Exit the program"<<endl;
        cout << "***************************" << endl;
        cin >> option;

        switch (option) {   
            case 1:
                cout << "Enter the first and second number here: " << endl;
                cin >> num1;
                cout<<"Enter second number here: "<<endl;
                cin>>num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout<<"Enter the first number :"<<endl;
                cin>>num1;
                cout<<"Enter the second number :"<<endl;
                cin>>num2;
                cout<<"Result:"<<subsract(num1,num2)<<endl;
                break;
            case 3:
                cout<<"Enter the first number: "<<endl;
                cin>>num1;
                cout<<"Enter the second number: "<<endl;
                cin>>num2;
                cout<<"Result:"<<division(num1,num2)<<endl;
                 break;
            case 4:
                cout<<"Enter the first number: "<<endl;
                cin>>num1;
                cout<<"Enter the second number : "<<endl;
                cin>>num2;
                cout<<"result: "<<multiply(num1,num2)<<endl;
                break;
            case 5:
                cout<<"Thanks so much "<<endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1 or 2." << endl;
        }

    } while (option != 5);

    return 0;
}





