#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],ar[m];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

    for(int i=0;i<m;i++)
    {
       cin>>ar[i];
    }   
    sort(arr,arr+n);
    sort(ar,ar+m);
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<"-->>";
    }
     for(int i=0;i<m;i++)
    {
    cout<<ar[i]<<"-->>";
    }
    
    return 0;
}