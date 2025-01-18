#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int

using vl=vector<ll>;
using vvi=vector<vl>;
using vp=vector<pair<ll,ll>>;
using vvp=vector<vp>;
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

vvp adj(n);

void display()
{
    for(i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto it:adj[i])
        {
            cout<<"{"<<it.first<<" ,"<<it.second<<"} , ";
        }
        cout<<endl;
    }
}

int32_t main()
{
    fast;
    cin>>n>>m;
    //adj(n);//error avabe hobe adj.resize(n);
    while(m--)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        adj[x].pb({y,w});      // an edges cunnected between two vertices
    }
    display();
}
