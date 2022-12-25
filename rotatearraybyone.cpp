/*Array oation with other functionality*/
#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
    int x=arr[n-1],i;
    for(int i=n-1;i>0;i--)
    {
       arr[i]=arr[i-1];
    }
    arr[0]=x;
}
int main()
{
   int n,time,queries;
   cin>>n>>time>>queries;
   int arr[n],ar[queries];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<queries;i++)
   {
       cin>>ar[i];
   }
   while(time>0)
   {
   rotate(arr,n);
   time--;
   }
   cout<<"Rotated array"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<"->";
   }
   for(int i=0;i<queries;i++)
   {
       cout<<arr[ar[i]];
   }

   return 0;
}