/*
//Double Linkedlist
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

Node*printlist(Node*node)
{
    Node*temp = node;
    cout<<"The list contains: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }   
    cout<<endl;
}
int main()
{
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
   
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=NULL;
    
    printlist(head);
    
}  */

/*
//Insertion At beginning
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

Node*printlist(Node*node)
{
    Node*temp = node;
    cout<<"The list contains: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }   
    cout<<endl;
}
Node*insert_beg(Node*head, int data){
    Node*temp = new Node(data);
    temp->next = head;
    if(head!=NULL)
    head->prev = temp;
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
    cout<<"this is existing list and after inserting at beginning updated list is: "<<endl;
    head=insert_beg(head,100);
    printlist(head);
} */


/*
//Insertion At End
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
    temp4=insert_end(head,100);
    printlist(head);
}  */