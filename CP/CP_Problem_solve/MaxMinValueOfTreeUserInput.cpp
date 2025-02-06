#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using vd=std::vector<double>;
using vvd=vector<vd>;
#define ll long long int
#define dl double

using vl=vector<ll>;
using vvl=vector<vl>;
using vc=vector<char>;
using vi=vector<int>;

struct  node
{
	int data;
	node* left;
	node* right;
	node(int d)
	{
		data=d;
		left=right=NULL;
	}
};
struct node* creatnode()
{
	int value;
	cin>>value;
	if(value<0)return NULL;
	struct node* root=new node(value);
	root->left=creatnode();
	root->right=creatnode();
	return root;

}
void Inorder(struct node* root)
{
	if(root==NULL)return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

int maxValue(struct node* root)
{
	if(root==NULL)return INT_MIN;
	int res=root->data;
	int leftValue=maxValue(root->left);
	int rightValue=maxValue(root->right);
	if(leftValue>res)res=leftValue;
	if(rightValue>res)res=rightValue;
	return res;
}
int minValue(struct node* root)
{
	if(root==NULL)return INT_MAX;
	int res=root->data;
	int leftValue=minValue(root->left);
	int rightValue=minValue(root->right);
	if(res>leftValue)res=leftValue;
	if(res>rightValue)res=rightValue;
	return res;
}

int32_t main()
{
	struct node* root=creatnode();
	cout<<"Inorder traversal of tree :";
	Inorder(root);
	cout<<endl;
	cout<<"Maximum data of tree : "<<maxValue(root)<<endl;
	cout<<"Minimun data of tree : "<<minValue(root)<<endl;
}

/*node value : 1 
 left child of 1
 node value : 2
 left child of 2
 node value : -1
 right child of 2
 node value : -1
 right child of 1
 node value : 3
 left child of 3
 node value : -1
 right child of 3
 node value : -1 

Input:1 2 -1 -1 3 -1 -1

output:Inorder traversal of tree :2 1 3 
    Maximum data of tree : 3
    Minimun data of tree : 1

*/
