/*repeated strings*/




#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    bool check=1;
    for(int i=0;i<str.length()-1;i++)
    {
        int count=0;
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j] && str[i]!=' ')
            {
               cout<<str[i]<<"  reapeted   ";
               count++;
               cout<<count<<"   times"<<endl;
               check=0;
            }
          
        }
        
    }
    if(check==true)
    cout<<"Not repeated any string";
    return 0;
}