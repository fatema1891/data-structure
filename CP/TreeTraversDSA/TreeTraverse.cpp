
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int

#define pb push_back
using vl=vector<ll>;
using vvi=vector<vl>;
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

ll n=2000,m,i;
vvi tree(n);
vb vis(n);

void bfs(ll u)
{
   queue<ll>q;
   vis[u]=true;
   q.push(u);
   while(!q.empty())
   {
   	ll nbr=q.front();
   	cout<<nbr<<' ';
   	q.pop();
   	for(auto node:tree[nbr])
   	{
   		if(!vis[node])
   		q.push(node);
   	vis[node]=true;
   	}
   }
}

int main()
{
	cin>>n>>m;
	while(m--)
	{
		ll u,v;
		cin>>u>>v;
		tree[u].pb(v);
		tree[v].pb(u);
	}
	bfs(1);   //input:n=5,m=4;u,v=>1 2,1 3,2 4,2 5
            //output:1 2 3 4 5
}
