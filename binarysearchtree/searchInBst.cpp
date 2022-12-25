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


node* search(struct node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    
    if(root->data==key)
    {
        return root;
    }

    if(root->data>key)
    {
        return search(root->left,key);
    }
    
    return search(root->right,key);
}

int main()
{
    struct node* root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);
    
    if(search(root,6)==NULL)
    {
        cout<<"Not present in BST";
    }
    else
    {
        cout<<"Present in BST";
    }
    return 0;

}