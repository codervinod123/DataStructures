#include<bits/stdc++.h>

using namespace std;
struct node
{
   int data;
   struct node* left;
   struct node* right;
   node(int val)
   {
       data=val;
       left=NULL;
       right=NULL;
   }
};

node* buildBST(int preorder[],int* preorderIdx,int key,int min,int max,int n)
{
    if(*preorderIdx>=n)
    {
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max)
    {
      root=new node(key);
      *preorderIdx=*preorderIdx+1;
    
    if(*preorderIdx<n)
    {
        root->left=buildBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n); 
    }

     if(*preorderIdx<n)
    {
        root->right=buildBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n); 
    }
   
    }
     return root;
}

void display(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    display(root->left);
    
    display(root->right);
}

int main()
{
    int preorder[]={10,2,1,13,11};
    int n=5;
    int preorderIdx=0;
    
    node* root=buildBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,n);
    display(root);
    return 0;
}
