#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define REP for(i=0;i<n;i++)

ll NearlyElement(ll arr[],ll n,ll m)
{
    ll l=0,r=n;
    ll ans=-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(arr[mid]==m){ans=mid;
        break;}
        else if(l<=mid-1&&arr[mid-1]==m){
          ans=mid-1;
          break;
        }
        else if(r>=mid+1&&arr[mid+1]==m){ans=mid+1;
        break;}
        if(arr[mid]>m)r=mid-2;
        else l=mid+2;
    }
    return ans;
}

int main()
{
    ll i,j,n;
    cin>>n;ll arr[n];
    REP{cin>>arr[i];}
    ll m;cin>>m;
    ll nearlyE=NearlyElement(arr,n,m);
    cout<<m<<" Search of element nearly sorted : "<<nearlyE<<endl;
}
