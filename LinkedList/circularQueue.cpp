#include<iostream>
using namespace std;
#define N 10
int arr[N];
int front=-1;
int rear=-1;

void enqueData(int data)
{
   cin>>data;
   if((rear+1)%N==front)
   {
       cout<<"Queue is full"<<endl;
       return;
   }
   else if(front==rear==-1)
   {
       front=rear=0;
       arr[rear]=data;
   }
   else
   {
       rear=(rear+1)%N;
       arr[rear]=data;
   }
}

void dequeData()
{
   if(rear==front==-1)
     {
         cout<<"No element"<<endl;
         return;
     }
     else if(front==rear)
     {
         front=rear=-1;
     }
     else
     {
         front=(front+1)%N;
     }
}

void displayData()
{
     int i=front;
     if(rear==-1  && front==-1)
     {
         cout<<"No element"<<endl;
         return;
     }

else{
   
   while(i<=rear)
   {
       cout<<arr[i]<<endl;
       i=(i+1)%N;
   }
    
  
}
}

void frontData()
{
  if(front==-1 && rear==-1)
  {
      cout<<"Empty"<<endl;
      return;
  }
  else
  cout<<arr[front]<<endl;
}

int main()
{
    int data,choice;
    while(1)
    {
        cout<<"Enter 1 for insertion"<<endl;
        cout<<"Enter 2 for deletion"<<endl;
        cout<<"Enter 3 for display"<<endl;
        cout<<"Enter 4 for front"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
           enqueData(data);
        break;

        case 2:
           dequeData();
        break;

        case 3:
           displayData();
        break;

        case 4:
           frontData();
        break;
        
        default:
            cout<<"Invalid data"<<endl;
         break;
        }
    }

}