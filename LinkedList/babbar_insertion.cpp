#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(Node* &head,int data)
{
   Node* temp=new Node(data);
   temp->next=head;
   head=temp;

}

void insertAtTail(Node* &tail,int data)
{
    Node* newnode=new Node(data);
    tail->next=newnode;
    tail=newnode;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    if(position==1)
    {
       insertAtHead(head,data);
       return; 
    }
   int count=1;
   Node* temp=head;
   while(count<position-1)
   {
       temp=temp->next;
       count++;
   }
   if(temp->next==NULL)
   {
       insertAtTail(tail,data);
       return;
   }
   Node* newnode=new Node(data);
   newnode->next=temp->next;
   temp->next=newnode;
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}



int main()
{
    Node* newnode=new Node(5);
    Node* head=newnode;
    Node* tail=newnode;
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(tail,7);
    insertAtTail(tail,8);
    insertAtPosition(head,tail,4,6);
    insertAtPosition(head,tail,4,666);
    insertAtPosition(head,tail,1,2);
    insertAtPosition(head,tail,1,1);
     insertAtPosition(head,tail,10,9);
     insertAtPosition(head,tail,11,10);
    print(head);
    cout<<endl;
    return 0;
}






















