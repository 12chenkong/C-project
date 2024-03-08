#include<iostream>
using namespace std;
string task[20];
int taskStatus[20];
int taskCount=0;

void displayMenu()
{
    cout<<"1.Add task to your list:"<<endl;
    cout<<"2.Display task in your list:"<<endl;
    cout<<"3.Mark tesk as complete:"<<endl;
    cout<<"4.Remove your task:"<<endl;
    cout<<"5.Exit the program:"<<endl;
}
void addTask()
{
    if(taskCount<5) 
    {
        do{
        cout<<"Enter the number of task: "<<endl;
        cin>>task[taskCount];
        // tasks not completed yet
        taskStatus[taskCount]=0;
        taskCount++;
        cout<<"Task added: "<<task[taskCount-1]<<endl;
        }while(taskCount!=5);
        
    }
    else
    cout<<"Your To-Do list is full!!! can't add more tasks"<<endl;
}
void showTask()
{
    if(taskCount==0)
    {
        cout<<"Your list is emty you have not added anything yet"<<endl;
    }
    else
    for(int i=0;i<taskCount;i++)
    {
        if(taskStatus[i]==0)
        {
            cout<<(i+1)<<"."<<"[not completed]:"<<task[i]<<endl;
        }
        else
        cout<<(i+1)<<"."<<"[complete]:"<<task[i]<<endl;
        
    }   
}
void markAsComplete()
{
    if(taskCount==0)
    {
        cout<<"Your list have nothing in it!! please click 1 for adding";
        //return;
        exit;
    }
    
    // calling showTask function inside the markAscomplete
    showTask();
    int indexTask;
    cout<<"Enter the Task number to makr as complete: "<<endl;
    cin>>indexTask;
    if(indexTask>=1 && indexTask<=taskCount)
    {   // 1 for tast that completed
        taskStatus[indexTask-1]=1;
        cout<<"The task you completed:"<<task[indexTask-1]<<endl;
    }
    else
    cout<<"Invalid input please try again leter!! ";
}
void removeTask()
{
    if(taskCount==0)
    {
        cout<<"You have nothing to remove! please click 1 for adding "<<endl;
        return;
    }
    showTask();
    int numToRemove;
    cout<<"Enter the number to remove the Tast from list: "<<endl;
    cin>>numToRemove;
    if(numToRemove>=1 && numToRemove<=taskCount)
    {
        for(int i=numToRemove-1;i<taskCount-1;i++)
        {
            task[i]=task[i+1];
            taskStatus[i]=taskStatus[i+1];

        }
         cout<<"Rmove successfully!"<<endl;
        taskCount--;
       
    }
    else
    cout<<"Input valid value !!!"<<endl;
}



int main()
{
    int option;
    do{
        
        displayMenu();
        cout<<"******************"<<endl;
        cout<<"Please choose one of them: "<<endl;
        cout<<"*********************"<<endl;
        cin>>option;
        switch (option)
        {
        case 1: 
                addTask();
            break;
        case 2:
                showTask();
            break;
        case 3:
                markAsComplete();
         break;
        case 4:
                removeTask();
        break;
        case 5:
        cout<<"Thanks for being proudctive with your work!!"<<endl;
        break;
        default:
            cout<<"Invalid input pleaase try again!";
            break;
        }

    }while(option!=5);

   
    return 0;
}   
