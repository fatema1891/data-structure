#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct node
{

    struct node* prev;
    int data;
    struct node* next;
};
struct node* addToEmpty(struct node* head,int data)
{
    struct node* temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
};
struct node* addToEnd(struct node* head,int data)
{
    struct node* temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
     ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    return head;
};
struct node* delFast(struct node* head)
{
    struct node* temp,*ptr;
    temp=head;
    ptr=head->next;
    temp->next=NULL;
    head=ptr;
    free(temp);
    return head;

};
struct node* delLast(struct node* head)
{
    struct node* temp,*ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    temp=ptr->prev;
    temp->next=NULL;
    free(ptr);
    return head;
};
void print(struct node* head)
{
    struct node *ptr=head;
    cout<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
struct node* rever(struct node* head)
{
    struct node* ptr,*temp;
    ptr=head;
    temp=ptr->next;
    ptr->next=NULL;
    ptr->prev=temp;
    while(temp!=NULL)
    {
        temp->prev=temp->next;
        temp->next=ptr;
        ptr=temp;
        temp=temp->prev;
    }
    head=ptr;
    return head;
};
int main()
{
    struct node* head=NULL;
    struct node* ptr;
    int i;
    head=addToEmpty(head,99);
    for(i=1;i<=60;i+=10)
    {
        head=addToEnd(head,i);
    }
    cout<<"Before Deleting: ";
    print(head);
    head=delFast(head);
    head=delLast(head);
    cout<<"After Deleting :";
    print(head);
    head=rever(head);
    print(head);
}
