//push(), pop(), isEmpty(), isFull(),getMin();
//the main intension of this program is to find min and max element using 2 stack

#include<iostream>
#include<stack>
using namespace std;
stack<int> s1,s2,s3;
 
void enter(int x)
{
     
     cin>>x;  
     if(s1.empty())
     {
         s1.push(x);
         s2.push(x);
         s3.push(x);
       
     }
     else if(!s1.empty())
     {
        s1.push(x);
     
        if(x<=s2.top())
        {
            s2.push(x);
        }
        else if(x>=s3.top())
        {
            s3.push(x);
        }
     }
    

}

void min()
{
    cout<<"The minimum element is"<<s2.top()<<endl;
    cout<<"The maximum element is"<<s3.top()<<endl;
    cout<<s1.top()<<endl;
    cout<<s1.empty()<<endl;
    


}

int main()
{
      int x,choice;
      while(1)
      {
          cout<<"enter 1 for push"<<endl;
          cout<<"enter 2 for min"<<endl;
          cin>>choice;
          switch (choice)
          {
          case 1:
          enter(x);
          break;
          case 2:
          min();
          break;
          default:
          cout<<"enter valid input"<<endl;
              break;
          }
      }
      
}