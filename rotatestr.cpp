


#include<bits/stdc++.h>
using namespace std;

void reverse(string &str)
{
    getline(cin,str);
    int n=str.length();
    string temp;
    for(int i=0;i<n/2;i++)
    {
        swap(str[i],str[n-i-1]);
    }
}

int main()
{
    string str;
    reverse(str);
    cout<<str;
    return 0;
}