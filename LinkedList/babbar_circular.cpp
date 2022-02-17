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

    ~Node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
           delete next;
           this->next=NULL;
        }
        cout<<"value deleted"<<endl;
    }
};

void insertAfterElement(Node* &tail,int data,int element)
{
    Node* newnode=new Node(data);
    if(tail==NULL)
    {
        tail=newnode;
        tail->next=tail;
    }
   else
   {
       Node* curr=tail;
      while(curr->data!=element)
      {
        curr=curr->next;
      }
      
      newnode->next=curr->next;
      curr->next=newnode;
   }
}

void print(Node* &tail)
{
    Node* temp=tail;
    do
    {
       cout<<tail->data;
       tail=tail->next;
    } while (tail!=temp);
    
}

int main()
{
    Node* tail=NULL;
    insertAfterElement(tail,5,6);
    insertAfterElement(tail,6,5);
    insertAfterElement(tail,7,6);
    insertAfterElement(tail,8,7);
    insertAfterElement(tail,8,7);
    insertAfterElement(tail,9,6);

    print(tail);
    return 0;
}