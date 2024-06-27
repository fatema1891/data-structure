#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* addBeg(struct node* head,int d)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->next=head;
    head=ptr;
    return head;
};
void print(struct node* head)
{
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    struct node* ptr,*head=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=1;
    ptr->next=NULL;
    head=ptr;
    int i;
    for( i=11;i<=99;i+=10){
    head=addBeg(head,i);
    }
    print(head);
}
