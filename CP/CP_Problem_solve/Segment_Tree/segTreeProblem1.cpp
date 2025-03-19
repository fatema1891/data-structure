#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
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
	tree[node]=tree[left]+tree[right];
}

ll query(ll node,ll begin,ll end,ll l,ll r)
{
	if(begin>r||end<l)return 0;
	if(begin>=l&&end<=r)return tree[node];
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	ll sum1=query(left,begin,mid,l,r);
	ll sum2=query(right,mid+1,end,l,r);
	return sum1+sum2;
}

void update(ll node,ll begin,ll end,ll indx,ll value)
{
	if(begin>indx||end<indx)return;
	if(begin>=indx&&end<=indx)
		{
			tree[node]=value;
			return;
		}
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	update(left,begin,mid,indx,value);
	update(right,mid+1,end,indx,value);
	tree[node]=tree[left]+tree[right];
}

int32_t main()
{
	fast;
	ll n,i,m,j,b,a,l,r,v,u;
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>arr[i];
		init(1,0,n-1);
	for(i=1;i<=m;i++)
	{
		ll type;
		cin>>type;
		if(type==2)
		{
			cin>>l>>r;
			ll sum=query(1,0,n-1,l,r-1);
			cout<<sum<<endl;
		}
		else
		{
			cin>>u>>v;
			update(1,0,n-1,u,v);
		}


	}
}
