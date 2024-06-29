#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   // bubbleSort(arr,n);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
