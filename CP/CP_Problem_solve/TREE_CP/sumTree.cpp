
//every (left+right)node==rootNode

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using vl=std::vector<ll>;
using vvl=vector<vl>;
using vc=vector<char>;
#define mx *max_element(v.begin(),v.end());

ll t,i,j,n,m;
struct tree
{
	ll data;
	tree* left;
	tree* right;
	tree(ll node)
	{
		data=node;
		left=right=NULL;
	}
};
tree* creatNode()
{
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
ll sumTree(tree* root)
{
	if(root==NULL)return 0;
	if(root->left==NULL&&root->right==NULL)return root->data;
	ll ls=sumTree(root->left);
	if(ls==-1)return -1;

	ll rs=sumTree(root->right);
	if(rs==-1)return -1;
	if(root->data==(ls+rs))return root->data+ls+rs;
	else return -1;
}
int main()
{
	fast;
	tree* root;
	root=creatNode();
	inorder(root);
	cout<<endl;
	ll ans=sumTree(root);
	if(ans==-1)cout<<"is not sum Tree"<<endl;
	else cout<<"is sumTree and totol sum of node = "<<ans<<endl;
}
/* input:
1
2
-1
-1
3
-1
-1
output:
2 1 3
is not sum Tree
*/

/* input:
26   root
10   left of 26
4    left of 10
-1   left of 4
-1   right of 4
6    right of 10
-1   left of 6
-1   right of 6
3    right of 26
-1   left of 3
3    right of 3
-1   left of 3
-1   right of 3
output:
4 10 6 26 3 3
is sumTree and totol sum of node = 52
*/
