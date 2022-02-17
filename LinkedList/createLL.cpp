#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node* next;
};


//creation of a linked list
void push(node* *head_ref,int newdata)
{
   node* newnode=new node();
   cin>>newdata;
   newnode->data=newdata; 
   newnode->next=(*head_ref);
   (*head_ref)=newnode;

}


//Displaying element of the linked list
void display(node* head)
{
    while(head!=NULL)
    {
    cout<<head->data;
    head=head->next;
    }

}

//additio of the linked list elment
void addition(node* head)
{
    int sum=0;
    while(head!=NULL)
    {
        sum=sum+head->data;
    head=head->next;
    
    }
    cout<<sum;
}


//deletion of the node from linked list
void del(node* *head_ref,int key)
{
    node* temp=*head_ref;
    node* prev=NULL;
    cin>>key;
    int count=0;
    if(temp!=NULL && temp->data==key)
    {
         *head_ref=temp->next;
         delete temp;
         return;
    }
    else
    {
        while(temp!=NULL && temp->data!=key)
        {
            prev=temp;
            temp=temp->next;
            count++;
        }
        if(temp==NULL)
        return;
        prev->next=temp->next;
        delete temp;
    }
    cout<<"Index of Deleted node"<<count<<endl;
}


void delBypos(node* *head_ref,int pos)
{

    if(*head_ref==NULL)
    return;
    node* temp=*head_ref;
    cin>>pos;
    if(pos==0)
    {
        *head_ref=temp->next;
        delete temp;
        return;
    }
    for(int i=0;i<pos-1 && temp!=NULL;i++)
    temp=temp->next;
    if(temp==NULL && temp->next==NULL)
    return;
    node *next=temp->next->next;
    delete temp->next;
    temp->next=next;
}

void delList(node* *head_ref)
{
    node* current=*head_ref;
    node* next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        delete current;
        current=next;       
    }
    *head_ref=NULL;
}



void length(node* head)
{
     if(head==NULL)
     {
         cout<<"List is Empty"<<endl;
         return;
     }
     int count=0;
     while(head!=NULL)
     {
        head=head->next;
        count++;
     }
     cout<<"Length of the array"<<count<<endl;

}

void middleElm(node* head)
{
   if(head==NULL)
   {
      cout<<"Empty"<<endl;
      return ;
   }
   
   int count=0;
   while(head!=NULL)
   {
       head=head->next;
       count++;
   }
   int mid=count/2;
   
 for(int i=1;i<mid;i++)
 head=head->next;
 cout<<head->data;


 

}

bool search(node* *head_ref,int elm)
{
   node* current=*head_ref;
   cin>>elm;
   while(current!=NULL)
   {
       if(current->data==elm)
       
       return true;
       current=current->next;
    }
   return false;
}


void nthnode(node* *head_ref,int index)
{
   node* current=*head_ref;
   int count=0;
   cin>>index;
   while(current!=NULL)
   {
       if(count==index)
       cout<<current->data<<endl;
       current=current->next;
       count++;
   }
}


void nthfromlast(node* *head_ref,int index)
{
   node* current=*head_ref;
    cin>>index;
   int count=0;
   while(current!=NULL)
   {
       
       current=current->next;
       count++; 
   }
    current=*head_ref;
    for (int i = 1; i < count - index + 1; i++)
        current = current->next;
 
    cout << current->data<<endl;
 }


void occurence(node* *head_ref,int occurent)
{
   node* current=*head_ref;
   cin>>occurent;
   int count=0;
   while(current!=NULL)
   {
      if(current->data==occurent)
      count++;
      current=current->next;
   }
   cout<<count<<endl;
}

void reverse(node* head)
{
   node* current=head;
   node* next=head;
   node* prev=NULL;
   while(next!=NULL)
   {
      next=next->next;
      current->next=prev;
      prev=current;
      current=next;
   }
   head=prev;
  
}


void insertBeg(node* *head_ref,int data)
{
    node* newnode = new node();
    cin>>newnode->data;
    newnode->next=*head_ref;
    *head_ref=newnode;
}

void insertEnd(node* *head_ref,int data)
{
   node* newnode = new node();
    cin>>newnode->data;
    newnode->next=NULL;
    node* temp=*head_ref;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void insertPos(node* *head_ref,int data,int pos)
{
    node* newnode=new node();
    cin>>pos; 
    int i=1;
   
    node* temp=*head_ref;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    cin>>newnode->data;
    newnode->next=temp->next;
    temp->next=newnode;
}

/*void swap(node* *head_ref,int x,int y)
{
    cin>>x>>y;
   if(x==y)
   return;
   node* prevX=NULL;
   node* currX=*head_ref;
   while(currX && currX->data!=x)
   {
       prevX=currX;
       currX=currX->next;
   }
   node* prevY=NULL;
   node* currY=*head_ref;
   while(currY && currY->data!=y)
   {
       prevY=currY;
       currY=currY->next;
   }
   
   if(currX==NULL || currY==NULL)
   return;
   if(prevX!=NULL)
   prevX->next=currY;
   else
   *head_ref=currY;

   if(prevY!=NULL)
   prevY->next=currY;
   else
   *head_ref=currX;
   node* temp=currY->next;
   currY->next=currX->next;
   currX->next=temp;
}*/



int main()
{
    node* head=NULL;
    int data,choice,key,pos,elm,index,occurent,x,y,begData,endData,insPos;
    while(1)
    {
        cout<<"Enter 1 for push data"<<endl;
        cout<<"Enter 2 for display data"<<endl;
        cout<<"Enter 3 for addition of data"<<endl;
        cout<<"Enter 4 for deletion of data"<<endl;
        cout<<"Enter 5 for deletion of data"<<endl;
        cout<<"Enter 6 for deletion of data"<<endl;
        cout<<"Enter 7 for find the length of linked list"<<endl;
        cout<<"Enter 8 for print mid element"<<endl;
        cout<<"Enter 9 for check element are present or not"<<endl;
        cout<<"Enter 10 for print given index's element"<<endl;
        cout<<"Enter 11 for print given index's element from last"<<endl;
        cout<<"Enter 12 for print given element occurence"<<endl;
        cout<<"Enter 13 for print the linked list in reverse order"<<endl;
        cout<<"Enter 14 for insert element at begining"<<endl;
        cout<<"Enter 15 for insert element at End"<<endl;
        cout<<"Enter 16 for insert element at given position"<<endl;

       // cout<<"Enter 14 for swap the element of the Linked list"<<endl;
        cin>>choice;
       switch(choice)
       {
           case 1:
           push(&head,data);
           break;
           case 2:
           display(head);
           break;
           case 3:
           addition(head);
           break;
           case 4:
           del(&head,key);
           break;
           case 5:
           delBypos(&head,pos);
           break;
           case 6:
           delList(&head);
           break;
           case 7:
           length(head);
           break;
           case 8:
           middleElm(head);
           break;
           case 9:
           search(&head,elm)? cout<<"yes it is present"<<endl : cout<<"not present"<<endl;
           break;
           case 10:
           nthnode(&head,index);
           break;
           case 11:
           nthfromlast(&head,index);
           break;
           case 12:
           occurence(&head,occurent);
           break;
           case 13:
           reverse(head);
           break;
           case 14:
           insertBeg(&head,begData);
           break;
           case 15:
           insertEnd(&head,endData);
           break;
           case 16:
           insertPos(&head,endData,pos);
           break;
           /*case 14:
           swap(&head,x,y);
           break;*/
           default:
           cout<<"invalid input";
       }

    }
    
}
 