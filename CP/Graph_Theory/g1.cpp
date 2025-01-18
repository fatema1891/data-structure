#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class graph{
    int v;
    list<int>*l;

public:
    graph(int v)
    {
        this->v=v;
       l=new list<int>[v];
    }

   void addedgj(int x,int y)
    {
       l[x].push_back(y);
       l[y].push_back(x);
    }
    void print()
    {
       for(int i=0;i<v;i++)
       {
           cout<<"vertex "<<i<<" : ";
           for(auto it:l[i])
           {
               cout<<it<< " ";
           }
           cout<<endl;
       }
    }
};


int main()
{
    graph g(4);
    g.addedgj(0,1);
    g.addedgj(0,2);
    g.addedgj(1,2);
    g.addedgj(2,3);
    g.print();
}
