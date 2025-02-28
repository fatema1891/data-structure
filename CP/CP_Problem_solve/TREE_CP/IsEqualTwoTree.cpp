#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using vl=std::vector<ll>;
using vvl=vector<vl>;
using vc=vector<char>;
#define mx *max_element(v.begin(),v.end());
#define mn *min_element(v.begin(),v.end());

ll t,i,j,n;
struct tree
{
	int data;
	tree* left;
	tree *right;
	tree(int node)
	{
		data=node;
		left=right=NULL;
	}
};

tree* creatNode()
{
	ll m;
	cin>>m;
	if(m<0)return NULL;
	tree* temp=new tree(m);
	temp->left=creatNode();
	temp->right=creatNode();
	return temp;
}
void inorder(tree* root)
{
	if(root==NULL)return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

bool isEqual(tree* root1,tree* root2)
{
	if(root1==NULL&&root2==NULL)return true;
	if(root1==NULL||root2==NULL)return false;

	return ((root1->data==root2->data) &&
		isEqual(root1->left,root2->left)&&
		isEqual(root1->right,root2->right));
}

int32_t main()
{
	tree* root1=creatNode();
	cout<<"first tree : ";
	inorder(root1);
	cout<<endl;
	tree* root2=creatNode();
	cout<<"second tree : ";
	inorder(root2);
	cout<<endl;
	if(isEqual(root1,root2))cout<<"first tree equal second tree"<<endl;
	else cout<<"first tree not equal second tree"<<endl;
}
/*
1 2 -1 -1 3 -1 -1
first tree : 2 1 3
1 2 -1 -1 3 -1 -1
second tree : 2 1 3
first tree equal second tree
*/
