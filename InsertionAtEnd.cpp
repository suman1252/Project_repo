/*
//Insertion at end

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
    data=x;
    next=NULL;
   };
};
void print_List(Node*head)
{
    Node*curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    } 
}
Node*insert_end(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head == NULL)
    return temp;
    Node*curr=head;
    while(curr->next!=NULL)
    curr=curr->next;
    curr->next=temp;
    return head;
}
int main(){
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    Node*temp3=new Node(40);
    Node*temp4=new Node(50);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=NULL;
    print_List(head);
    cout<<endl;
    cout<<"this is existing list and after inserting at end updated list is: "<<endl;
    temp4=insert_end(head,100);
    print_List(head);
}
*/


//Deletion At End
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
    data=x;
    next=NULL;
   };
};
void print_List(Node*head)
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
int main(){
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    Node*temp3=new Node(40);
    Node*temp4=new Node(50);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=NULL;
    print_List(head);
    cout<<endl;
    cout<<"this is existing list and after deleting at beginning updated list is: "<<endl;
    temp4=delete_end(head);
    print_List(head);
}