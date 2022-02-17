
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* prev;
    node* next;
};


void push(node* *head,int data)
{
   node* newnode=new node();
   cin>>data;
   newnode->data=data;
   newnode->prev=NULL;
   newnode->next=*head;
   if(*head!=NULL)
   (*head)->prev=newnode;
   (*head)=newnode;
    
}


void display(node* head)
{
    node* current=head;
    while(current!=NULL)
    {
        cout<<current->data;
        current=current->next;
    }
}

int main()
{
    node* head=NULL;
    node* prev=NULL;
    int choice,data;
    while(1)
    {
        cout<<"Enter 1 for push data in List"<<endl;
        cout<<"Enter 2 for Display data of List"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        push(&head,data);
        break;
        case 2:
        display(head);
        break;
        default:
        cout<<"Enter The valid Input"<<endl;
        
        }
    }
}