#include<bits/stdc++.h>
using namespace std;
 class Node{
     public:
     int data;
     Node* left;
     Node* right;
     
     Node(int data)
     {
         this->data=data;
         this->left=NULL;
         this->right=NULL;
     }
     
 };


Node* insertDataInBst(Node* root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }

    if(data>root->data)
    {
        root->right=insertDataInBst(root->right,data);
    }
    else{
        root->left=insertDataInBst(root->left,data);
    }
    return root;
}

void insertData(Node* root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
      insertDataInBst(root,data);
      cin>>data;
    }
}

 int main()
 {
    Node* root=NULL;
    cout<<"Enter the data to be inserted in Binary search tree";
    insertData(root);
   return 0;
 }