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
    ll temp,pos;cin>>temp>>pos;
    for(i=n;i>pos+1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=temp;
    for(i=0;i<=n;i++)cout<<arr[i]<<" ";
}

