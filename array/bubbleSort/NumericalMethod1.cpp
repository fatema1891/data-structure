#include<bits/stdc++.h>
using namespace std;
#define f(x) x*sin(x)+cos(x)         //define f(x) pow(x,3)-3*x-5
#define dif(x) cos(x)

//#define dif(x) 3*x*x-3
int main()
{
    float x0;cin>>x0;
    float e;cin>>e;
    float f,dif,f1,x;
    int cnt=0;
    do{
        f=f(x0);
        dif=dif(x0);
        x=x0-f/dif;
        x0=x;
        f1=f(x);
        cnt++;
        cout<<"x"<<cnt<<": "<<x<<"f(x) : "<<f1<<endl;
    }while(abs(f1)>e);
    cout<<" root : "<<x<<endl;
}
