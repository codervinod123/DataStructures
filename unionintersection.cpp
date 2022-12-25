/*union and intersection*/
#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0,a=0;
    cin>>n>>m;
    int arr[n],ar[n],ary[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==ar[j])
            {
               ary[count]=arr[i];
               count++;
            }
        
        }
    }
    cout<<"common (intersection)->";
    for(int i=0;i<count;i++)
    {
        cout<<ary[i]<<"->";
    }
    return 0;

}