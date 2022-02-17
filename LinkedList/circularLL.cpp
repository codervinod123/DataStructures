
#include<bits/stdc++.h>
using namespace std;
class node
{ 
  public:
  int data; 
  node* next;
};


void push(node* *head_ref,int data)
{
  node* newnode=new node();
  cin>>data;
  newnode->data=data;
  node* temp=*head_ref;
  if(*head_ref==NULL)
  {
     *head_ref=newnode;
     newnode->next=*head_ref;
  }
  else 
  {
       while(temp->next!=*head_ref)
       temp=temp->next;
       temp->next=newnode;
       newnode->next=*head_ref;
  }
  *head_ref=newnode;
}

void display(node* head)
{
  node* temp=head;
do
{
   cout<<temp->data;
   temp=temp->next;
} while (temp!=head);
}

void  insertTail(node* *head_ref,int data)
{
    node* newnode=new node();
    node* temp=*head_ref;
    cin>>data;
    newnode->data=data;
    if(*head_ref==NULL)
    {
       *head_ref=newnode;
       newnode->next=*head_ref;
    }
    else
    {
      while(temp->next!=*head_ref)
      {
        temp=temp->next;
      }
      temp->next=newnode;
      newnode->next=*head_ref;
    }
}

void insertHead(node* *head_ref,int data)
{
    node* newnode=new node();
    node* temp=*head_ref;
    node* ptr=*head_ref;
    cin>>data;
    newnode->data=data;
    newnode->next=NULL;
    while(temp->next!=*head_ref)
    {
      temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=ptr;
    *head_ref=newnode;
}


void insertAfter(node* *head_ref,int data,int pos)
{
   node* newnode=new node;
   node* temp=*head_ref;
   int count=1;
   cin>>data;
   cin>>pos;
   newnode->data=data;
   newnode->next=NULL;
   while(count!=pos)
   {
     temp=temp->next;
     count++;
   }
   newnode->next=temp->next;
   temp->next=newnode;

}



void delHead(node* head)

{
   node* temp=head;
   head=head->next;
  
}
 
void split(node* head)
{
   int count=1;
   node* temp=head;
   do{
     temp=temp->next;
     count++;
   }while(temp->next!=head);
   int pos=count/2;
   int rot=0;
   node* ptr=head;
   while(rot<pos-1)
   {
      ptr=ptr->next;
      rot++;
   }
   node* ptr2=ptr->next->next;
   do
   {
      ptr2=ptr2->next;
   }
   while(ptr->next!=head);
   node* head2=ptr->next->next;
   ptr2->next=head2;
   ptr->next=head;

int c1=1,c2=1;
node* p1=head;
node* p2=head2;
while(p1->next!=head)
{
  p1=p1->next;
  c1++;
}
cout<<c1<<endl;

while(p2->next!=head2)
{
  p2=p2->next;
  c2++;
}
cout<<c2<<endl;

}

int main()
{
  node* head=NULL;
  int data,choice,pos;
  while(1)
  {
    cout<<"Enter 1 for push data"<<endl;
    cout<<"Enter 2 for display data"<<endl;
    cout<<"Enter 3 for insert data at tail"<<endl;
    cout<<"Enter 4 for insert data at head"<<endl;
    cout<<"Enter 5 for insert data at random position"<<endl;
    cout<<"Enter 6 for delete data from head"<<endl;
    cout<<"Enter 7 for split the list in two list"<<endl;
    cin>>choice;
    switch (choice)
    {
      case 1:
      push(&head,data);
      break;
      case 2:
      display(head);
      break;
      case 3:
      insertTail(&head,data);
      break;
      case 4:
      insertHead(&head,data);
      break;
      case 5:
      insertAfter(&head,data,pos);
      break;
      case 6:
      delHead(head);
      break;
      case 7:
      split(head);
      break;
    }
   
  }
}