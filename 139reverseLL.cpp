#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};

void push(node* *head_ref,int new_data)
{
    cin>>new_data;
     node* newnode=new node();
     newnode->data=new_data;
     newnode->next=(*head_ref);
     *head_ref=newnode;
}


void display(node* newnode)
{

while(newnode!=NULL)
    {
        
        cout<<newnode->data<<"->";
        newnode=newnode->next;
    }
    cout<<endl;


}
void rotate(node* head)
{
    if(head==NULL || head->next==NULL)
    return;
    node* current=head->next;
    node* reversed=head;
    reversed->next=NULL;
    while(current!=NULL)
    {
        node* temp=current;
        current=current->next;
        temp->next=reversed;
        reversed=temp;
    }
    display(head);
}

int main()
{
    node* head=NULL;
    int choice,key;
    while(1)
    {
        cout<<"enter 1 for insertion"<<endl;
        cout<<"enter 2 for display"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        push(&head,key);
        break;
        case 2:
        display(head);
        break;
        case 3:
        rotate(head);
        break;
        default:
        cout<<"Please give a valid input";
        break;
        }
    }
}

/*#include<bits/stdc++.h>
using namespace std;
class node
{
   public:
   int data;
   node* next;
};
void push(node* *head_ref,int new_data)
{
    node* newnode=new node();
    cin>>new_data;
    newnode->data=new_data;
    newnode->next=(*head_ref);
    (*head_ref)=newnode;
}

void deleteNode(node* *head_ref,int key)
{
    node* temp=*head_ref;
    node* prew=NULL;
    cin>>key;
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
           prew=temp;
           temp=temp->next;
        }
        if(temp == NULL)
        return;
        prew->next = temp->next;
        delete temp;

    }
}

void deleteList(node* *head_ref)
{
    node* current=*head_ref;
    node* next=NULL;
    while(current!=NULL)
    {
       next=current->next;
       free(current);
       current=next;
    }
    *head_ref=NULL;
}



void deletepos(node* *head_ref,int pos)
{
     if(*head_ref==NULL)
     {
         cout<<"The given list is empty"<<endl;
         return;
     }
     node* temp=*head_ref;
     cout<<"enter the position";
     cin>>pos;
     if(pos==0)
     {
        *head_ref=temp->next;
        free(temp);
        return;
     }
     for(int i=0;temp!=NULL && i<pos-1;i++)
     temp=temp->next;
     if(temp==NULL || temp->next==NULL)
     return;
     node* next=temp->next->next;
     free(temp->next);
     temp->next=next;
}

void length(node* head)
{
    
    if(head==NULL)
    {
    cout<<"Empty list"<<endl;
    return;
    }

    int count=0;
    node* current=head;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    cout<<count<<endl;
}

void search(node* head,int value)
{
    cin>>value;
   if(head==NULL)
    {
    cout<<"Empty list"<<endl;
    return;
    }
    node* temp=head;
   
      while(temp!=NULL)
        {
             if(temp->data==value)
             cout<<"Value finded"<<endl;
             temp=temp->next;
        }
        cout<<"Not present"<<endl;
}


void index(node* head,int ind)
{
    if(head==NULL)
    {
    cout<<"Empty list"<<endl;
    return;
    }
    node* temp=head;
    cin>>ind;
    int count=0;
    while(temp!=NULL)
    {
        if(count==ind)
        {
        cout<<"The data is present at"<<ind<<"is --"<<temp->data<<endl;
        }
        count++;
        temp=temp->next;
    }
}


void fromLast(node* head,int n)
{
    if(head==NULL)
    {
    cout<<"Empty list"<<endl;
    return;
    }

    node* temp=head;
    cin>>n;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    if(len<n)
    return ;
    temp=head;
    for(int i=1;i<len-n+1;i++)
    temp=temp->next;
    cout<<temp->data;
    return ;
}


void middle(node* head)
{
   node* temp=head;
   int count=0;
   while(temp!=NULL)
   {
       count++;
       temp=temp->next;
   }
   int middle=count/2;
   cout<<middle;
   index(head,middle);
}

void frequency(node* head,int keyelement)
{
   
    node* temp=head;
     cin>>keyelement;
    int count=0;
    while(temp!=NULL)
    {
        if(temp->data==keyelement)
        count++;
        temp=temp->next;
    }
    cout<<count<<endl;
}

void checkPal(node* head)
{
    int count=0;
    node* current=head;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    int arr[count];
    for(int i=0;i<count;i++)
    {
        cout<<arr[i];
    }
}


void display(node* newnode)
{
    if(newnode==NULL)
    {
    cout<<"Empty list"<<endl;
    return;
    }
    cout<<"The intered list is->";
    while(newnode!=NULL)
    {
        
        cout<<newnode->data<<"->";
        newnode=newnode->next;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    int choice,data,deleted,key,position,value,ind,last,keyelement;
    while(1)
    {
        cout<<"Enter 1 for insertion"<<endl;
        cout<<"Enter 2 for displaying the list"<<endl;
        cout<<"Enter 3 for deletion"<<endl;
        cout<<"Enter 4 for delete the complete list"<<endl;
        cout<<"Enter 5 for delete node by taking position"<<endl;
        cout<<"Enter 6 for find the length"<<endl;
        cout<<"Enter 7 for searching the node in list"<<endl;
        cout<<"Enter 8 for find the index of trhe data"<<endl;
        cout<<"Enter 9 for find the data giving by last index"<<endl;
        cout<<"Enter 10 for find the middle of the  list"<<endl;
        cout<<"Enter 11 for find the frequency of the data"<<endl;
        cout<<"Enter 12 for find the palindrom or not"<<endl;
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
        deleteNode(&head,key);
        break;
        case 4:
        deleteList(&head);
        break;
        case 5:
        deletepos(&head,position);
        break;
        case 6:
        length(head);
        break;
        case 7:
        search(head,value);
        break;
        case 8:
        index(head,ind);
        break;
        case 9:
        fromLast(head,last);
        break;
        case 10:
        middle(head);
        break;
        case 11:
        frequency(head,keyelement);
        break;
        case 12:
        checkPal(head);
        break;
        case 0:
        exit(0);
        break;
        default:
        cout<<"Enter valid instrution"<<endl;
        break;
        }
    }
    return 0;
}*/
