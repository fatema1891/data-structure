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
   // insertionSort(arr,n);             //jotokoto nibo toto toko sort korbo
    for(int i=1;i<n;i++)
    {
       int temp=arr[i];
       int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=temp;
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

