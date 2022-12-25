#include<iostream>
#include<array>
using namespace std;

class node
{
   public:
   int data;
   node* left;
   node* right;
   node(int val)
   {
       data=val;
       left=NULL;
       right=NULL;
   }
};

node* BstUsingArray(int arr[],int start,int end)

{
    if(start>end)
    {
        return NULL;
    }

    int mid=(start+end)/2;
    node* root=new node(arr[mid]);
    root->left=BstUsingArray(arr,start,mid-1);
    root->right=BstUsingArray(arr,mid+1,end);
    return root;
}

void display(node* root)
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
    int arr[]={10,20,30,40,50};
    node* root=BstUsingArray(arr,0,4);
    display(root);
    return 0;
}
