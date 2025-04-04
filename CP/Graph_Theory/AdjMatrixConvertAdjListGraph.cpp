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
vvi adjMatrix;

void addNode(ll i,ll j)
{
    adjMatrix[i][j]=1;
    adjMatrix[j][i]=1;
}

void convertAdjList()
{
    for(ll i=0;i<adjMatrix.size();i++)
    {
        for(ll j=0;j<adjMatrix.size();j++)
        {
            if(adjMatrix[i][j]!=0)adj[i].pb(j);
        }
    }
}
void displayAdjMatrix()
{
    cout<<"AdjMatrix :"<<endl;
    for(ll i=0;i<adjMatrix.size();i++)
    {
        for(ll j=0;j<adjMatrix.size();j++)
        {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void displayAdjList()
{
    cout<<"Adjacency List :"<<endl;
    for( i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto it:adj[i])
        {
            cout<<it<<" ,";
        }
        cout<<endl;
    }
}



int32_t main()
{
    fast;
    cin>>n;
    //adj.resize(n);
    adjMatrix.resize(n,vl(n,0));
    for(int i=0;i<n-1;i++) addNode(i,i+1);
    convertAdjList();

    displayAdjMatrix();

    displayAdjList();
}
/*
input:
7

output:
AdjMatrix :
0 1 0 0 0 0 0
1 0 1 0 0 0 0
0 1 0 1 0 0 0
0 0 1 0 1 0 0
0 0 0 1 0 1 0
0 0 0 0 1 0 1
0 0 0 0 0 1 0

Adjacency List :
0 -> 1 ,
1 -> 0 ,2 ,
2 -> 1 ,3 ,
3 -> 2 ,4 ,
4 -> 3 ,5 ,
5 -> 4 ,6 ,
6 -> 5 ,
*/
