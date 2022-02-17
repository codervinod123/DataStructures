#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;


  //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

//destructor
~Node()
{
  int data=this->data;
  if(this->next!=NULL)
  {
      delete next;
      this->next=NULL;
  }  
  cout<<"Data has been deleted"<<data<<endl;
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






void deletFromAnywhere(Node* &head,int position)
{
    
   if(position==1)
   {
       Node* temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;
   }
   else
   {
       int count=1;
      Node* curr=head;
      Node* prev=NULL;
      while(count<position)
      {
         prev=curr;
         curr=curr->next;
         count++;
      }
      prev->next=curr->next;
      curr->next=NULL;
      delete curr;



   }
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
    deletFromAnywhere(head,3);
     print(head);
    cout<<endl;
     deletFromAnywhere(head,5);
     print(head);
    cout<<endl;
    deletFromAnywhere(head,8);
     print(head);
    cout<<endl;
    return 0;
}






















