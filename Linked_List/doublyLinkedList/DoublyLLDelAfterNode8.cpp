

#include<bits/stdc++.h>
using namespace std;

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* addEnd(struct node* head,int d)
{
    struct node* ptr,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    ptr=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=d;
    temp->next=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    return head;
};
struct node* DelAfterNode (struct node* head,int node)
{
    struct node* ptr,*temp;
    ptr=head;
    int pos=0;
    while(ptr->data!=node)
    {
        pos++;
       ptr=ptr->next;
       if(ptr==NULL)break;
    }
    if(ptr==NULL)cout<<node<<" Not found "<<endl;
    else
    {
      ptr->prev=ptr->prev->prev;
      ptr->prev->next=ptr;
      cout<<node<<" is found ."<<endl<<"It's position or index : "<<pos <<endl;
    }

    return head;
};
void print(struct node* head)
{
    struct node*temp,*ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main()
{
    struct node* head=NULL;
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->prev=NULL;
    ptr->data=1;
    ptr->next=NULL;
    head=ptr;
    for(int i=11;i<=111;i+=10){
    head=addEnd(head,i);
    }
    cout<<"Befor delete after node : "<<endl;
    print(head);
    cout<<"After delete after node : "<<endl;
    int n;cin>>n;
    head=DelAfterNode(head,n);
    print(head);
}

