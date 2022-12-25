//incompleted


#include<iostream>
using namespace std;

struct node
{
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

node* deleteInBst(struct  node* root,int key)
{
    if(root->data>key){
        root->left=deleteInBst(root->left,key);
    }
    else if(root->data<key)
    {
         root->right=deleteInBst(root->right,key);
    }
    else 
    {
        if(root->left==NULL)
        {
           node* temp=root->right;
           free(root);
           return temp;
        }

        if(root->right==NULL)
        {
           node* temp=root->left;
           free(root);
           return temp;
        }
    }
}

void display(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

int main()
{
    struct node* root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);
    display(root);
    cout<<endl;
    root=deleteInBst(root,4);
    display(root);
    return 0;

}