/*
//Deletion At beginning
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data=d;
        prev = NULL;
        next = NULL;
    }
};
void printlist(Node*head)
{
    Node*curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    } 
}
Node*delete_beg(Node*head,int x){
    Node*temp=new Node(x);
    temp-> next =head;
    return temp;
}
int main()
{
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    Node*temp3=new Node(40);
    Node*temp4=new Node(50);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    temp3->next=temp4;
    temp4->prev=temp3;
    temp4->next=NULL;
    printlist(head);
    cout<<endl;
    cout<<"this is existing list and after inserting at end updated list is: "<<endl;
    head=delete_beg(head);
    printlist(head);
}  */
/*
//Deletion At End
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data=d;
        prev = NULL;
        next = NULL;
    }
};

void printlist(Node*head)
{
    Node*curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
       // curr->next=head;
    } 
}
Node*delete_end(Node*head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node*curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=NULL;

    return head;
}
int main()
{
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    Node*temp3=new Node(40);
    Node*temp4=new Node(50);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    temp3->next=temp4;
    temp4->prev=temp3;
    temp4->next=NULL;
    printlist(head);
    cout<<endl;
    cout<<"this is existing list and after inserting at end updated list is: "<<endl;
    temp4=delete_end(head);
    printlist(head);
}  */

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data=d;
        prev = NULL;
        next = NULL;
    }
};
void printlist(Node*head)
{
    Node*curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
       // curr->next=head;
    } 
}
Node*del_Last(Node*head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node*curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    return head;
}
int main()
{
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    Node*temp3=new Node(40);
    Node*temp4=new Node(50);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    temp3->next=temp4;
    temp4->prev=temp3;
    temp4->next=NULL;
    printlist(head);
    cout<<endl;
    cout<<"this is existing list and after inserting at end updated list is: "<<endl;
    temp4=del_Last(head);
    printlist(head);
    return 0;
}