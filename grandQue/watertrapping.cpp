#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr1[n];
   int arr2[n];
   int arr3[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr1[i];
   }
   arr2[0]=arr1[0];
   for(int i=1;i<n;i++)
   {
      arr2[i]=max(arr2[i-1],arr1[i]);
   }
     
   arr3[n-1]=arr1[n-1];
   for(int i=n-2;i>=0;i--)
   {
       arr3[i]=max(arr3[i+1],arr1[i]); 
   }
   int sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=(min(arr2[i],arr3[i])-arr1[i]);
   }
   cout<<sum;
   return 0;
}