//sort a stack using another stack

#include<iostream>
#include<stack>
using namespace std;
stack<int> s1,s2;
 void push(int data)
 {
     
     cin>>data;
     if(s1.empty())
     {
         s1.push(data);
     }
     else 
     {
         (s1.top()<data)
         {
             s2.push(s1.top());
             s1.pop();
         }
         s1.push(data);
         while (!s2.empty())
         {
             s1.push(s2.top());
             s2.pop();
         } 
         
        
     }
    
     
 }

 void display()
 {
     while(!s1.empty())
     {
         cout<<s1.top()<<endl;
         s1.pop();
     }
 }

 //driver function

 int main()
 {
     int data,choice;
     while(1)
     {
         cout<<"Enter 1 for push data"<<endl;
         cout<<"Enter 2 for display data"<<endl;
         cin>>choice;
         switch (choice)
         {
         case 1:
         push(data);  
         break;
         case 2:
         display();  
         break;
         
         default:
         cout<<"Enter a valid data"<<endl;
             break;
         }
     }
 }