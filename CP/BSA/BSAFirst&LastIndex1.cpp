#include<bits/stdc++.h>
using namespace std;
#define REP for(i=0;i<n;i++)
#define ll long long int

int bsFirst(ll arr[],ll n,ll m)
{
    ll l=0,r=n-1,ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(arr[mid]==m)ans=mid,r=mid-1;
        else if(arr[mid]<m)l=mid+1;
        else r=mid-1;
    }
    return ans;
}
int bsLast(ll arr[],ll n,ll m)
{
    ll l=0, r=n-1,ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(arr[mid]==m)ans=mid,l=mid+1;
        else if(arr[mid]<m)l=mid+1;
        else r=mid-1;
    }
    return ans;
}

int main()
{
    ll i,j,n;
    cin>>n;
    ll arr[n];
    REP{cin>>arr[i];}
    ll m;cin>>m;
    ll first=bsFirst(arr,n,m);
    ll Last=bsLast(arr,n,m);
    cout<<"first index : "<<first<<". Last index : "<<Last<<endl;

}
