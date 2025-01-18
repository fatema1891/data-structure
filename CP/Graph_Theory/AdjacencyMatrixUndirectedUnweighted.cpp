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

vvi adj;

void addEdj(ll i,ll j)
{
    adj[i][j]=1;
    adj[j][i]=1;      // no edges
}

void displayMatrix()
{
    int n=adj.size();
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cout<<adj[i][j]<< ' ';
        }
        cout<<endl;
    }
}

int32_t main()
{
    ll n,i,t,m;
    cin>>n;         //adjacency matrix is a squre matrix, so culumn=row;
    adj.resize(n,vl(n,0));// or vvi adj(n,vl(n,0));avabe dile function a adj pass korte hobe
   /*                      //n=row,culmn=vl(n,0);
    addEdj(0,1);
    addEdj(0,2);
    addEdj(1,2);
    addEdj(2,3);
    */
    for(i=0;i<n-1;i++)addEdj(i,i+1);
    displayMatrix();
}
