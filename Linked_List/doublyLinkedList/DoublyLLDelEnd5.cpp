

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
struct node* DelLastNode(struct node* head)
{
    struct node* ptr,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    temp->prev=NULL;
    temp->data=ptr->next->data;
    cout<<temp->data<<endl;
    temp->next=NULL;
    ptr->next=NULL;

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
    cout<<"Befor deleting last node :"<<endl;
    print(head);
    cout<<"After deleting Last node :"<<endl;
    head=DelLastNode(head);
    print(head);
}

