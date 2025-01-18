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
#define MAX 1000


int32_t main()
{
	queue<ll>q;
	ll n,i,m;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		q.push(m);
	}
	// First In First Out
	cout<<"top element "<<q.front()<<endl;
	cout<<"All element : ";
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}
