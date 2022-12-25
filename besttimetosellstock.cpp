// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   int profit=0;
   for(int i=0;i<n-1;i++)
   {
      if(arr[i]>arr[i+1])
      {
          profit=0;
      }
   }

   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(arr[i<arr[j]])
         {
            int max=arr[j]-arr[i];
            if(max>profit)
            {
               profit=max;
            }
         }
      }
   }
   
   

   cout<<profit;
   return 0;
}