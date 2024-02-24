/*
//Insertion at beginning

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
Node*insert_begin(Node*head,int x){
    Node*temp=new Node(x);
    temp-> next =head;
    return temp;
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
    cout<<"this is existing list and after inserting at beginning updated list is: "<<endl;
    head=insert_begin(head,100);
    print_List(head);
}  */  

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
Node*deletion_begin(Node*head,int x){
    Node*temp=new Node(x);
    temp-> next =head;
    return temp;
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
    cout<<"this is existing list and after inserting at beginning updated list is: "<<endl;
    head=deletion_begin(head,temp1);
    print_List(head);
} 