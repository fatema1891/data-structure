

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
struct node* ReverseNode(struct node* head)
{
    struct node* ptr,*temp;
    ptr=head->next;
    temp=head;
    temp->next=NULL;
    temp->prev=ptr;
    while(ptr!=NULL)
    {
        ptr->prev=ptr->next;
        ptr->next=temp;
        temp=ptr;
        ptr=ptr->prev;
    }
    head=temp;
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
    cout<<"Befor Reverse : "<<endl;
    print(head);
    cout<<"After Reverse : "<<endl;
    head=ReverseNode(head);
    print(head);
}
