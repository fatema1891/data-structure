#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define REP for(i=0;i<n;i++)

char beforChar(string s,char ch,int n)
{
    ll l=0,r=n-1;
    char ans;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(s[mid]>ch)r=mid-1,ans=s[mid];
        else  l=mid+1;
    }
    return ans;
}

int main()
{
    ll i,j;string s;
    cin>>s;char ch;cin>>ch;
    char before=beforChar(s,ch,s.size());
    cout<<ch<<" Next Alphabatic Element : "<<before<<endl;
}
