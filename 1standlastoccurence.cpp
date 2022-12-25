#include<iostream>
using namespace std;
int main()
{
    int n,ocr,count=0;
    cin>>n>>ocr;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
     
  for(int i=0;i<n;i++)
  {
      if(arr[i]==ocr)
      {
          cout<<i<<" ";
          break;
      }
  }
  for(int i=n-1;i>=0;i--)
     {
        if(arr[i]==ocr)
        {
            cout<<i;
            break;
        }
     }
    return 0;
}
 