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

struct  tree
{
	int node;
	tree*left;
	tree*right;
	tree(int data)
	{
		node=data;
		left=right=NULL;
	}
};

tree* InsertBST(tree* root,int key)
{
	if(root==NULL)return new tree(key);
	if(root->node==key)return root;
	if(root->node<key)root->right=InsertBST(root->right,key);
	else root->left=InsertBST(root->left,key);
	return root;
}

 int Ceil(tree* root,int key)
 {
 	if(root==NULL)return -1;
 	int floorvalue;
 	tree* curr=root;
 	while(curr!=NULL)
 	{
 		if(curr->node==key)return key;
 		if(curr->node<key)curr=curr->right;
 		else
 		{
 			floorvalue=curr->node;
 			curr=curr->left;
 		}

 	}
 	return floorvalue;
 }

//vl v;

int main()
{
	fast;
	ll n;
	cin>>n;
	tree* root=NULL;
	for(int i=1;i<=n;i++)
	{
		ll m;
		cin>>m;
		if(m>=0)
		root=InsertBST(root,m);
	}
	ll value;
	cin>>value;
	cout<<"CeilValue of "<<value<<" = "<<Ceil(root,value)<<endl;

}

