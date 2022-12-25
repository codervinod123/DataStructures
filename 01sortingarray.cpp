/*0/1/2 sorting without any sorting algorithm*/
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n],ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            ar[count]=0;
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            ar[count]=1;
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            ar[count]=2;
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}