
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node* addEnd(struct node* head,int d)
{
    struct node* temp,*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    return head;
};
struct node*DelLast(struct node* head)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
   ptr=head;
   while(ptr->next->next!=NULL)
   {
       ptr=ptr->next;
   }
   ptr->next=NULL;
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
    cout<<endl;
}

int main()
{
    struct node*head=NULL;
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=1;
    ptr->next=NULL;
    head=ptr;
    for(int i=11;i<=111;i+=10)
    {
        head=addEnd(head,i);
    }
    cout<<"Before deleting : "<<endl;
    print(head);
    cout<<"After deleting : "<<endl;
    head=DelLast(head);
   // head=head->next;
    print(head);
}
