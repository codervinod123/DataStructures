#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

bool isBalanced(string str)
{
    int n=str.length();
    stack<char> s;
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
        {
            s.push(str[i]);
        }
        else if(str[i]=='}' && (!s.empty()))
        {
            if(s.top()=='{')
            {
                s.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }

         else if(str[i]==']' && (!s.empty()))
        {
            if(s.top()=='[')
            {
                s.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }

         else if(str[i]==')' && (!s.empty()))
        {
            if(s.top()=='(')
            {
                s.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
    }
    if(!s.empty())
    {
        return false;
    }
    else
    {
        return ans;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {   
    string str;
    cin>>str;
    if(isBalanced(str))
    {
        cout<<"Valid String";
    }
    else 
    {
        cout<<"InValid String";
    }
    }
    return 0;
}


//best solution



// int n=s.size(),i;
//         bool ans=true;
//         stack<char> st;
//        for( i=0;i<n;i++)
//        {
//            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
//               st.push(s[i]);
       
        
//         if(s[i]==')')
//         {
        
//         if(!st.empty() && st.top()=='(')
//         st.pop();
//             else
//             {   ans=false;
//             break;}
//         } 
//         if(s[i]==']')
//         {
        
//         if(!st.empty() && st.top()=='[')
//         st.pop();
//             else
//             {   ans=false;
//             break;}
//         } 
//         if(s[i]=='}')
//         {
        
//         if(!st.empty() && st.top()=='{')
//         st.pop();
//             else
//             {    ans=false;
//             break;}
//         }
//        }
//         if(!st.empty())
//             return false;
//         return ans;
        