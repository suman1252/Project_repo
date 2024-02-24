#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
     data=x;
     next=NULL;
    }
};
int  print_list(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<"\t"<<endl;
        curr=curr->next;

    }
}
node *insert_begining(node *head,int x)
{
    node *temp=new node(x);
    temp->next=head;
    return temp;
}
node *insert_end(node *head,int x)
{
    node *temp=new node(x);
  if(head==NULL)
  return temp;
  node *curr=head;
  while(curr->next!=NULL)
  curr=curr->next;
  curr->next=temp;
  return head;
}
node *insert_position(node *head,int pos,int z)
{
    node *temp=new node(z);
    if(pos==1)
    {
        temp->next=head;
        return head;
    }
    node *curr=head;
    for(int i=1;i<pos-2 &&curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
    return head;
    }
   
    

    temp->next=curr->next;
    curr->next=temp;
    return head;
}

node *delete_begin(node *head)
{
    if(head==NULL)
    return NULL;
    else{
    node *temp=head->next;
    
    delete(head);
    return(temp);
    }
}
node *delete_end(node *head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
       
     node *curr=head;
     while(curr->next->next!=NULL)
     {curr=curr->next;}
     
     delete(curr->next);
     curr->next=NULL;
     return head;
    }
}
node *delete_position(node *head,int pos)
{
    
    if(pos==1)
    {
       delete head;
        return NULL;
    }
    node *curr=head;
    for(int i=1;i<pos-2 &&curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
    return head;
    }
   
    

    
    return head;
}

int main()
{
    node *head=new node(1);
    head->next=new node(2);

    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
   // head=insert_end(head,6);
   // head=insert_begining(head,0);
   //  head=insert_position(head,3,8);
    head=delete_begin(head);
    head=delete_end(head);
    head=delete_position(head,3);
    print_list(head);
    // node *head=new node(10);
    // node *temp1=new node(20);
    // node *temp2=new node(30);
    // node *temp3=new node(40);
    // node *temp4=new node (50);
    // head->next=temp1;
    // temp1->next=temp2;
    // temp2->next=temp3;
    // temp3->next=temp4;
    // temp4->next=NULL;
    // print_list(head);
} 