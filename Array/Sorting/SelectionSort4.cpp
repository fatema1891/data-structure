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
    //selectionSort
    for(int i=0;i<n-1;i++)
    {
       int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
               minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

