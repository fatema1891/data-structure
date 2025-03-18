#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using vl=vector<ll>;
using vvl=vector<vl>;
#define mx 100001
ll arr[mx];
ll tree[mx*4];

void init(ll node,ll begin,ll end)
{
	if(begin==end)
	{
		tree[node]=arr[begin];   //leaf node
		return;
	}
	ll left=node*2;
	ll right=node*2+1;
	ll mid=(begin+end)/2;
	init(left,begin,mid);
	init(right,mid+1,end);
	tree[node]=tree[left]+tree[right];
}
 ll query(ll node,ll begin,ll end,ll sb,ll se) //sb means sumBeginIndex
 {
 	if(begin>se||end<sb)return 0;
 	if(begin>=sb&&end<=se) return tree[node];
 	ll left=node*2;
 	ll right =node*2 +1;
 	ll mid=(begin+end)/2;
 	ll sum1=query(left,begin,mid,sb,se);
 	ll sum2=query(right,mid+1,end,sb,se);
 	return sum1+sum2;
 }

 void update(ll node,ll begin,ll end,ll updIn,ll updIndV)
 {
 	if(updIn<begin||updIn>end)return ;
 	if(begin>=updIn&&end<=updIn){// means updIn==begin & updIn ==end// leaf node
 		tree[node]=updIndV;
 		return;
 	}
 	ll left=node*2;
 	ll right=node*2+1;
 	ll mid=(begin+end)/2;
 	update(left,begin,mid,updIn,updIndV);
 	update(right,mid+1,end,updIn,updIndV);
 	tree[node]=tree[left]+tree[right];
 }

int32_t main()
{
	fast;
	ll n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)cin>>arr[i];
    init(1,1,n);//making tree from array
    ll sb,se;
    cin>>sb>>se;
    ll sum=query(1,1,n,sb,se);//sum of sb index from se index
    cout<<sum<<endl;
    ll updIn,updIndV;
    cin>>updIn>>updIndV;
    update(1,1,n,updIn,updIndV);
    ll updateSum=query(1,1,n,2,4);
    cout<<updateSum<<endl;
}
/*
input:
6
2 3 5 8 4 7
2 4// sum of index 2 to 4
2 20//index 2 ,updateV 20
output:
16
33
*/
