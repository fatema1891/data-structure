#include<bits/stdc++.h>
using namespace std;

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* addBeg(struct node* head,int d)
{
    struct node* ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->prev=NULL;
    ptr->data=d;
    ptr->next=NULL;
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
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
    head=addBeg(head,i);
    }
    print(head);
}
