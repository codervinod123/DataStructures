#include<iostream>
using namespace std;

/*Fun for reverse*/
void reverseArray(int arr[],int start,int end)
{
   
        while(start<end)
        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            end--;
            start++;
        }
    
}

/*fun for display array*/
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"->";
    }
    cout<<endl;
}

/*minimum and maximum of an array*/

void maxima(int arr[],int n,int min)
{
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>min)
        min=arr[i];
    }
    cout<<"Max val->"<<min<<endl;
}

void minima(int arr[],int n,int max)
{
     
    for(int i=0;i<n;i++)
    {
        if(arr[i]<max)
        max=arr[i];
    }
    cout<<"Min val->"<<max<<endl;
}


/*for kth biggest element*/

void kthElement(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        
}      

/*main function*/
int main()
{
    int size,key;
    cin>>size>>key;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    display(arr,size);
    reverseArray(arr,0,size-1);
    cout<<"Reserved array"<<endl;
    display(arr,size);
    maxima(arr,size,-500);
    minima(arr,size,10000);
    kthElement(arr,size,key);
    display(arr,size);
    cout<<arr[key-1];
    return 0;
}