#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using vl=std::vector<ll>;
using vvl=vector<vl>;

#define mx 100001
ll arr[mx];
pair<ll,ll>tree[mx*4];

void init(ll node,ll begin,ll end)
{
	if(begin==end)
	{
		tree[node]={arr[begin],1};
		return;
	}
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	init(left,begin,mid);
	init(right,mid+1,end);
	if(tree[left].first==tree[right].first)
	{
		tree[node]={tree[left].first,tree[left].second+tree[right].second};
	}
	else if(tree[left].first<tree[right].first)tree[node]=tree[left];
	else tree[node]=tree[right];
}

pair<ll,ll> query(ll node,ll begin,ll end,ll l,ll r)
{
	if(begin>r||end<l)return {INT_MAX,0};
	if(begin>=l&&end<=r)
	{
		return tree[node];
	}
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	pair<ll,ll>mn1=query(left,begin,mid,l,r);
	pair<ll,ll>mn2=query(right,mid+1,end,l,r);
	if(mn1.first==mn2.first)return {mn1.first,mn1.second+mn2.second};
	return (mn1.first<mn2.first)?mn1:mn2;
}
void update(ll node,ll begin,ll end,ll u,ll v)
{
	if(begin>=u&&end<=u)
		{
			tree[node]={v,1};
			return ;
		}
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	if(u<=mid)update(left,begin,mid,u,v);
	else update(right,mid+1,end,u,v);
	if(tree[left].first==tree[right].first)
	{
		tree[node]={tree[left].first,tree[left].second+tree[right].second};
	}
	else tree[node]=(tree[left].first<tree[right].first)?tree[left]:tree[right];
}


int32_t main()
{
	fast;
	ll m,n,i,t,l,r,u,v;
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>arr[i];
		init(1,0,n-1);
	while(m--)
	{
		cin>>t;
		if(t==2)
		{
			cin>>l>>r;
			pair<ll,ll>ans=query(1,0,n-1,l,r-1);
			cout<<ans.first<<" "<<ans.second<<endl;
		}
		else
		{
			cin>>u>>v;
			update(1,0,n-1,u,v);
		}
	}
}
