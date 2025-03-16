#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using vl=std::vector<ll>;
using vvl=vector<vl>;
using vc=vector<char>;

struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int valu)
	{
		data=valu;
		left=right=NULL;
	}
};

Node* creation()
{
	int m;
	cin>>m;
	if(m<0)return NULL;
	Node* temp=new Node(m);
	temp->left=creation();
	temp->right=creation();
	return temp;


}

ll foundSum=0;

ll subtreeSum(Node* root,int sum)
{
	if(root==NULL)return 0;

	ll currenSum= root->data+subtreeSum(root->left,sum)+subtreeSum(root->right,sum);
	if(currenSum==sum)foundSum=1;
	//cout<<currenSum<<endl;
	return currenSum;
}

AnsSubtree(Node* root,ll sum)
{
	//foundSum=0;
	subtreeSum(root,sum);
	return foundSum==1;
}

int32_t main()
{
	fast;
	struct Node* root=creation();
	ll sum;
	cin>>sum;
	if(AnsSubtree(root,sum))
		cout<<"(true) subtreeSum equal given sum"<<endl;
	else cout<<"false"<<endl;
}
/*
root 1
left node of 1
node value 3
left node of 3
node value 5
left node of 5
node value -1
right node of 5
node value -1
right node of 3
node value 9
left node of 9
node value -1
right node of 9
node value -1
right node of 1
node value 6
left node of 6
node value 8
left node of 8
node value -1
right value of 8
node value -1
right node of 6
right value -1

input:
1 3 5 -1 -1 9 -1 -1 6 8 -1 -1 -1
17//sum
      1
    /  \
    3   6
   /  \ /
   5  9 8
output:
true*/
