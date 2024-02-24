#include<iostream>
using namespace std;
struct node
{
    int data ;
    node *prev;
    node *next;
    node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};
void print_list(node *head)
{
  node *temp=head;
  cout<<"the list contain:"<<endl;
  while(temp!=NULL)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
  }
}
node *insert_begining(node *head,int x)
{
    node *temp=new node(x);
    temp->next=head->next;
    head->prev=temp;
    return temp;
}
node *insert_end(node *head,int y )
{
 node *temp=new node(y);
 node *curr=head;
 while(curr->next!=NULL)
 {
    curr=curr->next;
 }
    curr->next=temp;
    temp->prev=curr;
 
}
node *insert_position(node *head,int pos,int z)
{
    node *temp=new node(z);
    
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
	temp->prev=curr;
	
	return head;

}
node *delete_begin(node *head)
{
    if(head==NULL)
    return NULL;
    else{
    node *temp=head->next;
    head->next->prev=temp;
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
    
    
       
     node *curr=head;
     while(curr->next!=NULL)
     {curr=curr->next;}
     curr->prev->next=NULL;
     delete curr;
     
     return head;
    
}
int main()
{
    node *head=new node(100);
    node *temp1=new node(200);
    node *temp2=new node(300);
     node *temp3=new node(350);
      node *temp4=new node(370);
       node *temp5=new node(380);
        node *temp6=new node(390);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
     temp2->next=temp3;
     temp3->prev=temp2;
      temp3->next=temp4;
      temp4->prev=temp3;
       temp4->next=temp5;
       temp5->prev=temp4;
       temp5->next=temp6;
       temp6->prev=temp5;

    head=insert_begining(head,500);
    //insert_end(head,900);
    //insert_position(head,2,600);
    
   // head=delete_begin(head);
   // head=delete_end(head);
    print_list(head);

}