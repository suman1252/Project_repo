//Insertion At Position

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
Node*insert_pos(Node*head,int pos,int data)
{
    Node*temp=new Node(data);
    if(pos==1){
        temp->next=head;
        return head;
    }
    Node*curr=head;
    for(int i=1;i<=pos-2 && curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    return head;
    temp->next=temp;

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
    //print_List(head);
    //cout<<endl;
    //cout<<"this is existing list and after inserting at position updated list is: "<<endl;
    head=insert_pos(head,60,2);
    print_List(head);
}  

/*
//Deletion At Given Position
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
Node*delete_pos(Node*head,int pos,int data)
{
    Node*temp=new Node(data);
    if(pos==1){
        temp->next=head;
        return head;
    }
    Node*curr=head;
    for(int i=1;i<=pos-2 && curr!=NULL;i--)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    return head;
    temp->next=temp;

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
    cout<<"this is existing list and after deleting at position updated list is: "<<endl;
    temp2=delete_pos(head,3,40);
    print_List(head);
}  */