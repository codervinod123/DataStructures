#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node* next;
  Node* prev;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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
    Node* newnode=new Node(data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insertAtTail(Node* &tail,int data)
{
    Node* newnode=new Node(data);
     tail->next=newnode;
     newnode->prev=tail;
     tail=newnode;
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position)
{
    Node* newnode=new Node(data);
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
    newnode->next=temp->next;
    newnode->next->prev=newnode;
    newnode->prev=temp;
    temp->next=newnode;
}


void deletionAtPosiion(Node* & head,Node* &tail,int position)
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
      int cnt=1;
      Node* curr=head;
      Node* prev=NULL;
      while(cnt<position)
      {
         cnt++;
         prev=curr;
         curr=curr->next;
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
    Node* initialNode=new  Node(5);
    Node* head=initialNode;
    Node* tail=initialNode;


    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(tail,6);
  
    insertAtPosition(head,tail,5,5);
     print(head);
    cout<<endl;
     deletionAtPosiion(head,tail,1);
    print(head);
    cout<<endl;
    deletionAtPosiion(head,tail,1);
    print(head);
    cout<<endl;
    deletionAtPosiion(head,tail,3);
    print(head);
    cout<<endl;
    deletionAtPosiion(head,tail,4);
    print(head);
    cout<<endl;
    deletionAtPosiion(head,tail,4);
    print(head);
    cout<<endl;
    deletionAtPosiion(head,tail,3);
    print(head);
    cout<<endl;
    
    return 0;
}