//implementation of two stack by using 1 array in this code deletion function is not work 
//properly because of when we display the element will be deleted one by one 
//and if we use two extra stack for storing data then we will able to implement properly
 

#include<iostream>
using namespace std;
#define SIZE 20
int top1=-1;
int top2=SIZE;
int arr[SIZE];

void push1(int x)
{
    cin>>x;
    if(top1<top2-1)
    {
        top1++;
        arr[top1]=x;
    }
    else
    {
        cout<<"Stack is fulll"<<endl;
    }
}

void push2(int x)
{
    cin>>x;
    if(top1<top2-1)
    {
        top2--;
        arr[top2]=x;
    }
    else
    {
        cout<<"Stack is fulll"<<endl;
    }
}

void pop1()
{
    if(top1>=0)
    {
        int popped=arr[top1];
        top1--;
        cout<<"Popped element is==>"<<popped<<endl;
    }
    else
    {
        cout<<"Stack is Empty"<<endl;
    }
}

void pop2()
{
    if(top2<SIZE)
    {
        int popped=arr[top2];
        top2++;
        cout<<"Popped element is==>"<<popped<<endl;
    }
    else
    {
        cout<<"Stack is Empty"<<endl;
    }
}


void display1()
{
    for(int i=top1;i>=0;--i)
    {
    cout<<arr[top1]<<" ";
    top1--;
    }
    cout<<endl;
}

void display2()
{
    for(int i=top2;i<SIZE;++i)
    {
    cout<<arr[top2]<<" ";
    top2++;
    }
     cout<<endl;
}

//driver function

int main()
{
    int data,choice;
    while(1)
    {
       cout<<"Enter 1 for Enter data in Stack 1"<<endl;
       cout<<"Enter 2 for Enter data in Stack 2"<<endl;
       cout<<"Enter 3 for Delete data from Stack 1"<<endl;
       cout<<"Enter 4 for Delete data from Stack 2"<<endl;
       cout<<"Enter 5 for display data from Stack 1"<<endl;
       cout<<"Enter 6 for display data from Stack 2"<<endl;
       cin>>choice;
       switch (choice)
       {
       case 1:
        push1(data);
       break;
       case 2:
        push2(data);
       break;
       case 3:
        pop1();
       break;
       case 4:
        pop2();
       break;
       case 5:
        display1();
       break;
       case 6:
        display2();
       break;
       
       default:
       break;
       }
    }
    return 0;
}