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
	int a[MAX];
	stack()
	{
		top=-1;
	}
	bool push(int x)
     {
	   if(top>=MAX-1)
		{
			cout<<"Stack overflow"<<endl;
			return false;
		}
	  else
	   {
		a[++top]=x;
		return true;
	   }
     }

     int pop()
      {
	     if(top<0)
	      {
		       cout<<"Stack is underflow"<<endl;
		       return 0;
	      }
	     else
	      {
		     ll x=a[top--];
		     return x;
	      }
       }
     int peek()        // return the top element
        {
	       if(top<0)
	        {
		       cout<<"Stack is empty";
		        return 0;
	        }
	       else
	        {
		       int x=a[top];
		       return x;
	        }
        }
     bool is_empty()
      {
	    return (top<0);//condition if(top<0)
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
