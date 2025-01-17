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
	tree* left;
	tree *right;
	tree(int data)
	{
		node=data;
		left=right=NULL;
	}
};

//using Recursion
tree* InsertBinarySearchTree(tree* root,int key)
{
	if(root==NULL)return new tree(key);
	if(root->node==key)
		return root;//binary search tree a duplicate node not allow;
	if(root->node<key)
		root->right=InsertBinarySearchTree(root->right,key);

	else if(root->node>key)
		root->left=InsertBinarySearchTree(root->left,key);

	return root;
}

//using while loop

/*
tree*  InsertBinarySearchTree(tree* root,int key)
{
	tree* temp=new tree(key);
	if(root==NULL)return temp;
	tree* parent=NULL,*curr=root;
	while(curr!=NULL)
	{
		parent=curr;
		if(curr->node<key)curr=curr->right;
		else if(curr->node>key)curr=curr->left;
		else return root;//curr->node==key
	}
	if(parent->node<key)parent->right=temp;
	else parent->left=temp;
	return root;
}
*/

void InorderTraverse(tree* root)
{
	if(root==NULL)return;
	InorderTraverse(root->left);
	cout<<root->node<<" ";
	InorderTraverse(root->right);
}



int main()
{
    fast;
	tree *head=NULL;//=new  tree(55);
	tree* root=InsertBinarySearchTree(head,55);//head;
	root=InsertBinarySearchTree(root,33);
	root=InsertBinarySearchTree(root,23);
	root=InsertBinarySearchTree(root,44);
	root=InsertBinarySearchTree(root,77);
	root=InsertBinarySearchTree(root,66);
	root=InsertBinarySearchTree(root,88);

	InorderTraverse(root);
}
