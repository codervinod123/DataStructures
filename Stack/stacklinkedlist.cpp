
#include<iostream>
using namespace std;

class node
{
    public:
  int data;
  node* next;
};

node* top=NULL;

void push(node* *hed_ref,int data)
{
    node* newnode=new node();
    
    cin>>data;
    newnode->data=data;
    newnode->next=top;
    top=newnode;
}

void display()
{
    node* temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

void pop()
{
    node* temp=top;
   //cout<<"popped element is-->"<<top->data;
   top=top->next;
   free(temp);
}

void peak()
{
    cout<<top->data;
}

int main()
{
    node* top=NULL;
    int choice,data;
    while(1)
    {
        cout<<"Enter 1 for PUSH data into the stack"<<endl;
        cout<<"Enter 2 for POP data from the stack"<<endl;
        cout<<"Enter 3 for display data of the stack"<<endl;
        cout<<"Enter 4 for print data from the top of stack"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        push(&top,data);
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        peak();
        break;
        default:
        cout<<"Enter valid Data"<<endl;
        break;
        case 0:
        exit;
        }
    }
}


