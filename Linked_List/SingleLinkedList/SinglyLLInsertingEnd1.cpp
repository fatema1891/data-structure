#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};

struct node* addEmpty(struct node* head,int d)
{
    struct node*temp,*ptr,*ptr1;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;

    ptr=head;
    while(ptr->next!=NULL)
    {
       ptr=ptr->next;
    }
    ptr->next=temp;
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
    head=addEmpty(head,i);
    }
    print(head);
}
