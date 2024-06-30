#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define REP for(i=0;i<n;i++)

ll FloorValue(ll arr[],ll n,ll m)
{
    ll l=0,r=n-1,ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(arr[mid]==m){ans=arr[mid];
        break;}
       else if(arr[mid]>m)ans=arr[mid],r=mid-1;
        else l=mid+1;
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
     ll Floor=FloorValue(arr,n,m);
     cout<<m<<" Floor of element : "<<Floor<<endl;
 }

