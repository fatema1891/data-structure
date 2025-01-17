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

char tree[20];

void root(char key)
{
	if(tree[0]!='\0')cout<<"Tree alredy had root"<<endl;
	else tree[0]=key;
}
void set_left(char child,int parent)
{
	if(tree[parent]=='\0')cout<<"not found parent"<<endl;
	else tree[(parent*2+1)]=child;
}
void set_right(char child,int parent)
{
	if(tree[parent]=='\0')cout<<"not found parent"<<endl;
	else tree[(parent*2+2)]=child;
}
void print_tree()
{
	cout<<endl;
	for(int i=0;i<20;i++)
	{
		if(tree[i]!='\0')
		cout<<tree[i];
	    else cout<<'-';
	}
}



int main()
{
	root('A');
	set_left('B',0);
	set_right('C',0);//root(n)=0,left=(2*n+1),right=(2*n+2)
	set_left('D',1);
	set_right('E',1);
	set_left('F',2);
	set_right('G',3);
	print_tree();
}
