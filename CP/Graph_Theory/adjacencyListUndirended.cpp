#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int

using vl=vector<ll>;
using vvi=vector<vl>;
using vc=vector<char>;
#define mpll map<ll,ll>
#define mpllstr map<ll,string>
#define ub upper_bound
#define lb lower_bound
#define cn cin>>a>>b
#define ct cout<<ans<<endl
#define rev reverse(v.begin(),v.end())
#define srt sort(v.begin(),v.end())
#define mnv *min_element(v.begin(),v.end())
#define mxv *max_element(v.begin(),v.end())
#define mod 1000000007//1e9+7
#define pb push_back
ll n=2000,m,i,t,j;

vvi adj(n);

void display()
{
    for(i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto it:adj[i])
        {
            cout<<it<<" ,";
        }
        cout<<endl;
    }
}

int32_t main()
{
    fast;
    cin>>n>>m;
    //adj(n);
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].pb(y);      // an edges cunnected between two vertices
        adj[y].pb(x);
    }
    display();
}
