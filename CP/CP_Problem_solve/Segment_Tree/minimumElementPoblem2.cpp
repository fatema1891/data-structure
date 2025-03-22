#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using vl=std::vector<ll>;
using vvl=vector<vl>;

#define mx 100001
ll arr[mx];
ll tree[mx*4];

void init(ll node,ll begin,ll end)
{
	if(begin==end)
	{
		tree[node]=arr[begin];
		return;
	}
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	init(left,begin,mid);
	init(right,mid+1,end);
	tree[node]=min(tree[left],tree[right]);
}
ll query(ll node,ll begin,ll end,ll l,ll r)
{
	if(begin>r||end<l)return INT_MAX;
	if(begin>=l&&end<=r)return tree[node];
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	ll mn1=query(left,begin,mid,l,r);
	ll mn2=query(right,mid+1,end,l,r);
	return min(mn1,mn2);

}

void update(ll node,ll begin,ll end,ll u,ll v)
{
	//if(begin>u||end<u)return;
	if(begin>=u&&end<=u)
		{
			tree[node]=v;
			return;
		}
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	if(u<=mid)update(left,begin,mid,u,v);
	else update(right,mid+1,end,u,v);
	tree[node]=min(tree[left],tree[right]);
}

int32_t main()
{
	fast;
	ll n,m,i,l,r,u,v,type;
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>arr[i];
		init(1,0,n-1);
		while(m--)
		{
			cin>>type;
			if(type==2)
			{
				cin>>l>>r;
				cout<<query(1,0,n-1,l,r-1)<<endl;

			}
			else
			{
				cin>>u>>v;
				update(1,0,n-1,u,v);
			}
		}
}
