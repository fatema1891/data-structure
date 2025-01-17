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
#define MAX 1000

struct Stack
{
	int top;
	Stack* head;
	int a[MAX];
	int node;
	Stack* next;

	Stack()
	{
		head=NULL;
	}

	Stack(int data)
	{
		node=data;
		next=NULL;
	}
	void push(int x)
     {
     	Stack* newNode=new Stack( x);
	   if(!newNode)
		{
			cout<<"Stack overflow"<<endl;
		}
	  newNode->next=head;
	  head=newNode;
     }

      int pop()
      {
	     if(is_empty())
	      {
		       cout<<"Stack is underflow"<<endl;
		       return -1;
	      }
	     else
	      {
		     Stack* temp=NULL;
		     temp=head;
		     int x=head->node;
		     head=head->next;
		     delete temp;
		     return x;
	      }
       }
     int peek()
        {
	       if(is_empty())
	        {
		       cout<<"Stack is empty";
		        return -1;
	        }
	       else
	        {
		       return head->node;
	        }
        }
     bool is_empty()
      {
	    //return (head==NULL);//condition if
	    if(head==NULL)return true;
	    else return false;
      }

};



int main()
{
	fast;
	Stack* s=new Stack();
	ll n,i,t;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s->push(i+4);
	}
	cout<<"top element = "<<s->peek()<<endl;
	cout<<"last to half element present poped of the stack : ";//last in first out
	for(i=n;i>n/2;i--)
	{
		cout<<s->pop()<<" ";
	}
	cout<<"\nfirst to half element present : ";
	while(!s->is_empty())
	{
		cout<<s->peek()<<" ";
		s->pop();
	}
	delete s;

}
