#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int

using vl=vector<ll>;
using vvi=vector<vl>;
using vp=vector<pair<ll,ll>>;
using vvp=vector<vp>;
using vc=vector<char>;
using vb=vector<bool>;
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
vb vis(n,0);
vvi adjMatrix;

void dfs(ll u)
{
    vis[u]=true;
    cout<<u<<" ";
    for(auto it:adj[u])
    {
        if(vis[it]==0)
        {
            dfs(it);
        }
    }
}


int32_t main()
{
    fast;
    cin>>n>>m;
    //adj.resize(n+5);
    //vis.resize(n+5,0);
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll c=0;
    for(i=0;i<n;i++)
    {
        if(vis[i]==false)dfs(i),c++,cout<<endl;
    }
    cout<<"connected component : "<<c<<endl;

}
