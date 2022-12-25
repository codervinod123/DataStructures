#include<iostream>
#include<climits>
using namespace std;

int maxSubArray(int ar[],int size)
{
      int maxtillnow=INT_MIN,maxnow=0;
      for(int i=0;i<size;i++)
      {
         maxnow=maxnow+ar[i];

         if(maxnow<maxtillnow)
         maxnow=maxtillnow;

         if(maxtillnow<0)
         maxtillnow=0;
      }
      return maxnow;
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   cout<<maxSubArray(arr,n);
   return 0;
}



