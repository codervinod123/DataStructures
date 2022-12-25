#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

class node
{
    public:
    int  data;
   struct node* left;
   struct node* right;
   node(int val)
   {
       data=val;
       left=NULL;
       right=NULL;
   }
};


void jigjagPrint(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*> q,q2;
    stack<node*> s;
    q.push(root);
    bool flag=false;
    if(flag==0)
    {
    while(!q.empty())
    {
        node* curr=q.front();
        q.pop();
        cout<<curr->data;
        if(curr->left!=NULL)
        {
            
        }
        if(curr->right!=NULL)
        {

        }
      flag=1;
    }
  }

  if(flag==1)
    {
    while(!q.empty())
    {
        node* curr=q.front();
        q.pop();
        s.push(curr);
        
        if(curr->left!=NULL)
        {
            
        }
        if(curr->right!=NULL)
        {

        }
      flag=1;
    }
    while(!s.empty())
    {
        node* temp2=s.top();
        s.pop();
        q2.push(temp2);
    }
    while(!q2.empty())
    {
        node* curr2=q2.front();
        q2.pop();
       cout<<curr2->data<<" ";
    }
  }

}

void display(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data;
    display(root->left);
    display(root->right);
}

int main()
{
    node* root=new node(7);
    root->left=new node(5);
    root->right=new node(10);
    root->left->right=new node(6);
    root->right->left=new node(9);
    root->right->right=new node(12);
    display(root);
    jigjagPrint(root);
    return 0;
}