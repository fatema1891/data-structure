#include<bits/stdc++.h>
using namespace std;
#define REP for(i=0;i<n;i++)
#define ll long long int

int main()
{
    ll i,j,n;
    cin>>n;
    ll arr[n];
    REP{cin>>arr[i];}
    ll temp,pos;cin>>pos;
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)cout<<arr[i]<<" ";
}





