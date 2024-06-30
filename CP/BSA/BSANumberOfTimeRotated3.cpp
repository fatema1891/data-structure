#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define REP for(i=0;i<n;i++)
int minv=0;

int bsRotated(ll arr[],ll l,ll n)
{
    ll ans=0,r=n-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){ans=mid+1,minv=arr[mid+1];
        break;}
        else if(arr[mid]<arr[mid-1]&&arr[mid+1]>arr[mid]){ans=mid,minv=arr[mid];
        break;}
        if(arr[mid]>arr[n])r=mid-1;
        else l=mid+1;
    }
    return ans;
}
int main()
{
   ll i,j,m,n;
   cin>>n;
   ll arr[n];
   REP {cin>>arr[i];}
   ll rotated=bsRotated(arr,0,n);
   cout<<"rotated index : "<<rotated<<". minValue : "<<minv<<endl;
}
