// #include<iostream>
// using namespace std;

// struct node
// {
//     int data;
//     struct node* left;
//     struct node* right;
//     node(int val)
//     {
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// node* createBst(struct node* root, int val)
// {
//     if(root==NULL)
//     {
//         return new node(val);
//     }
//     if(val<root->data)
//     {
//         root->left=createBst(root->left,val);
//     }
//     else
//     {
//         root->right=createBst(root->right,val);
//     }
//     return root;
// }


// //always gives te sorted list
// void display(struct node* root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     display(root->left);
//     cout<<root->data<<" ";
//     display(root->right);
// }

// int main()
// {
//     struct node* root=NULL;
//     root=createBst(root,5);
//     createBst(root,1);
//     createBst(root,3);
//     createBst(root,4);
//     createBst(root,2);
//     createBst(root,7);
//     display(root);
//     return 0;
// }




#include<bits/stdc++.h>
class node
{
    int data;
    node* left;
    node* right;
    node(int val)
    {
       data=val;
       left=NULL;
       tight=NULL;
    }
};


int main()
{
    node* root =new node();
    root=9;
    root->left=node(12);
    root->right=node(30);
    root->left->left=node(19);
    root->left->right=node(38);
    root->right->left=node(39);
    node->right->rightnode(99);
}