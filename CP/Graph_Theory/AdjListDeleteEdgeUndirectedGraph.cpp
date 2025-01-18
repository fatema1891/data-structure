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

vvi adj(n);

void display()
{
    for(i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto it:adj[i])
        {
            cout<<it<<" , ";
        }
        cout<<endl;
    }
}

void delEdge(ll p,ll q)
{
    for(ll i=0;i<adj[p].size();i++)
    {
        if(adj[p][i]==q)
        {
            adj[p].erase(adj[p].begin()+i);     //p->q ata erase korci.
            break;
        }
    }

    for(ll i=0;i<adj[q].size();i++)
    {
        if(adj[q][i]==p)
        {
            adj[q].erase(adj[q].begin()+i);// q->p ata erase korci
            break;
        }
    }
}

int32_t main()
{
    fast;
    cin>>n>>m;
    //adj(n);
    while(m--)
    {
        ll x,y,w;
        cin>>x>>y;
        adj[x].pb(y);      // an edges cunnected between two vertices
        adj[y].pb(x);
    }
    cout<<"befor delete edge :"<<endl;
    display();
    cout<<"After delete edge :"<<endl;
    ll p,q;
    cin>>p>>q;
    delEdge(p,q);
    display();
}
/*
input:
3 3
1 0
1 2
2 0
1 2
output:
befor delete edge :
0 -> 1 , 2 ,
1 -> 0 , 2 ,
2 -> 1 , 0 ,
After delete edge :
0 -> 1 , 2 ,
1 -> 0 ,
2 -> 0 ,
*/
