#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++)
    {
       if(arr[i]!=arr[n-i-1])
       {
           check=0;
           break;
       }
    }
    if(check==true)
    {
        cout<<"palindrom";
    }
    else
    {
        cout<<"Non palindrom";
    }
    return 0;
}



    