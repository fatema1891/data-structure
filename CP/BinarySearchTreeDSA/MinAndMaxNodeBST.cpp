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
/* uses of recursive
int minNode(tree* root)
{
	if(root==NULL)return -1;
	vector<ll>v;
	InorderTraverseBST(root,v);
	return v[0];
}*/

/*  uses of iteration (loop)
int minNode(tree* root)
{
	if(root==NULL)return -1;
	tree* curr=root;
	while(curr->left!=NULL)curr=curr->left;

	return curr->node;
}
*/

 void InorderTraverseBST(tree* root,vector<ll>&sortedNode)
{
	if(root==NULL)return;
	InorderTraverseBST(root->left,sortedNode);
	//cout<<root->node<<" ";
	sortedNode.push_back(root->node);
	InorderTraverseBST(root->right,sortedNode);
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
	//minNode(root);
	vector<ll>v;// inorder a sorted form a thake.
	InorderTraverseBST(root,v);
	cout<<"minNode of this tree "<<v[0]<<endl;
	rev;//reverse(v.begin(),v.end())
	cout<<"maxNode of this tree "<<v[0]<<endl;

}
