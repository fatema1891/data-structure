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
struct node* DelBeforeNode(struct node* head,int node)
{
    struct node* ptr,*temp;
    ptr=head;
    int pos=0;
    while(ptr->data!=node)
    {
        pos++;
        if(ptr->next==NULL)break;
        ptr=ptr->next;
    }
    pos++;
    if(ptr->next==NULL)cout<<"not found "<<endl;
    else
    {
        temp=ptr->next;
        ptr->next=ptr->next->next;
        ptr->next->prev=ptr;
        cout<<ptr->data<<" before node "<<temp->data<<" is found."<<" It's index : "<<pos<<endl;
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
    cout<<"Before delete before node : "<<endl;
    print(head);
    cout<<"After delete before node : "<<endl;
    int node;cin>>node;
    head=DelBeforeNode(head,node);
    print(head);
}

