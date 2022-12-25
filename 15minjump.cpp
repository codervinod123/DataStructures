not working properly

#include<iostream>
using namespace std;

int max(int x,int y)
{
    return (x>y) ? x:y;
}


int minJump(int arr[],int n)
{
   if(n<=0)
   return 0;
   if(arr[0]==0)
   return -1;
   int maxReach=arr[0];
   int step=arr[0];
   int jump=2;
   int i=1;
   for(i=1;i<n;i++)
   {
       if(i==n-1)
       return jump;
       maxReach=max(maxReach,i+arr[i]);
       step--;
       if(step==0)
       jump++;
       if (i >= maxReach)
       return -1;
       step=maxReach-1;
   }
return -1;
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
   int ans=minJump(arr,n);
   cout<<ans;
   return 0;
}



// C++ program to count Minimum number
// of jumps to reach end
/*#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
    return (x > y) ? x : y;
}

// Returns minimum number of jumps
// to reach arr[n-1] from arr[0]
int minJumps(int arr[], int n)
{

    // The number of jumps needed to
    // reach the starting index is 0
    if (n <= 1)
        return 0;

    // Return -1 if not possible to jump
    if (arr[0] == 0)
        return -1;

    // initialization
    // stores all time the maximal
    // reachable index in the array.
    int maxReach = arr[0];

    // stores the number of steps
    // we can still take
    int step = arr[0];

    // stores the number of jumps
    // necessary to reach that maximal
    // reachable position.
    int jump = 1;

    // Start traversing array
    int i = 1;
    for (i = 1; i < n; i++) {
        // Check if we have reached the end of the array
        if (i == n - 1)
            return jump;

        // updating maxReach
        maxReach = max(maxReach, i + arr[i]);

        // we use a step to get to the current index
        step--;

        // If no further steps left
        if (step == 0) {
            // we must have used a jump
            jump++;

            // Check if the current index/position or lesser index
            // is the maximum reach point from the previous indexes
            if (i >= maxReach)
                return -1;

            // re-initialize the steps to the amount
            // of steps to reach maxReach from position i.
            step = maxReach - i;
        }
    }

    return -1;
}

// Driver program to test above function
int main()
{
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int size = sizeof(arr) / sizeof(int);

    // Calling the minJumps function
    cout << ("Minimum number of jumps to reach end is %d ",
             minJumps(arr, size));
    return 0;
}
// This code is contributed by
// Shashank_Sharma*/
