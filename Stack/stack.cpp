#include<bits/stdc++.h>

using namespace std;
class Stack
{
   public:
   int top;
   int size;
   int *arr;
    Stack(int size)
    {
        this->size=size;
        top=-1;
        arr= new int [size];
    } 

    void push(int data)
    {
        if(size-top>1)
        {
            top++;
           arr[top]=data;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>-1)
        {
            top--;
        }
        else
        {
            cout<<"Stack is empty"<<endl;
        }
    }

    int Top()
    {
      if(top>-1)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

  bool isEmpty()
  {
     if(top>-1)
        {
          return true;
        }
        else
        {
            return false;
        }
  }


};


 int main()
 {
    Stack st(5);

    
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top();
    st.pop();
     cout<<st.Top();
    return 0;
 }