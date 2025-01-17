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
	if(root->node>key)
		root->left= InsertBST(root->left,key);
	else if(root->node<key)
		root->right= InsertBST(root->right,key);
	 return root;
}

/*int searchBST(tree* root, int key)
{
	if(root==NULL)return 0;
	if(root->node==key)return 1;
	else if(root->node<key)searchBST(root->right,key);
	else searchBST(root->left,key);

}*/

tree* searchBST(tree* root,int key)
{
	if(root==NULL||root->node==key)return root;
	if(root->node<key)searchBST(root->right,key);
	else searchBST(root->left,key);
}



int main()
{
	fast;
	ll n;
	cin>>n;
	tree* root=NULL;
	for(int i=1;i<=n;i++)
	{
		ll m;
		cin>>m;                 //user input
		if(m>=0)
			root=InsertBST(root,m);
	}

	ll Value;
	cin>>Value;
	/*if(searchBST(root,Value)==1)cout<<"found"<<endl;
	else cout<<"Not found"<<endl;
	*/                  // or

	if(searchBST(root,Value)!=NULL)cout<<"found"<<endl;
	else cout<<"Not found"<<endl;


}
