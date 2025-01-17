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

struct tree
{
	int node;
	tree* left;
	tree* right;
	tree(int data)
	{
		node=data;
		left=right=NULL;
	}
};

 tree* InsertNode(tree* root,int key)
{
	if(root==NULL){
		root=new tree(key);
		return root;
	}
	queue<tree*>q;
	q.push(root);
	while(!q.empty())
	{
		tree* ptr=q.front();
		q.pop();
		if(ptr->left!=NULL)q.push(ptr->left);
		else {
			ptr->left=new tree(key);
			return root;
		}

		if(ptr->right!=NULL)q.push(ptr->right);
		else {
			ptr->right=new tree(key);
			return root;
		}
	}
}

void InorderTraverse(tree* root)
{
	if(root==NULL)return;
	InorderTraverse(root->left);
	cout<<root->node<<" ";
	InorderTraverse(root->right);
}


int main()
{
	tree* head=new tree(10);
	tree *root=head;
	head->left=new tree(15);
	head->right=new tree(20);
	head->left->left=new tree(25);
	head->right->left=new tree(30);
	head->right->right=new tree(35);
	int key=55;
	root=InsertNode(root,key);            //output:25 15 55 10 30 20 35
	/*ll n;
	tree *root=head;
	cin>>n;
	tree *leftNode=head;
	tree* rightNode=head;
	for(int i=2;i<=n;i+=2)
	{
		 leftNode->left=new tree(i);//leftNode->right=new tree(i+1);
		 rightNode->right=new tree(i+1);//rightNode->left=new tree(i+2);
		                                //rightNode->right=new tree(i+3);
		 leftNode=leftNode->left;
		 rightNode=rightNode->right;

	}*/
	InorderTraverse(root);
}
