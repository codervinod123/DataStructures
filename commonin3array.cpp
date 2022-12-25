#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,count=0,l=0;
    cin>>a>>b>>c;
    int arr1[a],arr2[b],arr3[c],arr4[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
    }

    for(int i=0;i<b;i++)
    {
        cin>>arr2[i];
    }

    for(int i=0;i<c;i++)
    {
        cin>>arr3[i];
    }
    sort(arr1,arr1+a);
    sort(arr2,arr2+b);
    sort(arr3,arr3+c);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
       {
           if(arr1[i]==arr2[j])
           {
               arr4[i]=arr1[i];
               count++;
           }
       }
    }
    for(int i=0;i<count;i++)
    {
        cout<<arr4[i];
    }
    return 0;
    
}