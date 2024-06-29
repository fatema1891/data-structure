#include<bits/stdc++.h>
using namespace std;
#define REP for(i=0;i<n;i++)
#define ll long long int

void BS(ll arr[],ll n,ll temp)
{
    int l=0,r=n-1;
    while(l<=r){
    int mid=(l+r)/2;
    if(arr[mid]==temp){
            cout<<temp<<" Found. "<<endl<<"It's index = "<<mid<<endl;
            return;
    }
    else if(arr[mid]>temp)r=mid-1;
    else l=mid+1;
}
cout<<"Not found "<<endl;
return;
}

int main()
{
    ll i,j,n,temp;
    cin>>n;
    ll arr[n];
    REP{
    cin>>arr[i];
    }
    cin>>temp;
   BS(arr,n,temp);

}
