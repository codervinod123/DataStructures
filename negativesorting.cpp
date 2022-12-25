/*moving all the ngative number of array in one side*/
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
         if(arr[i]<0)
         {
             ar[count]=arr[i];
             count++;
         }
     }
     for(int i=0;i<n;i++)
     {
         if(arr[i]>=0)
         {
             ar[count]=arr[i];
             count++;
         }
     }
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(ar[i]<ar[j])
             {
                 int temp=ar[i];
                 ar[i]=ar[j];
                 ar[j]=temp;
             }
         }
     }
     for(int i=0;i<n;i++)
     {
         cout<<ar[i]<<"->";
     }
    return 0;
}