#include<stdio.h>
#define MAX_SIZE 5

int dequeue[MAX_SIZE];
int front=-1,rear=-1;

void insertFront(int value)
{
    if((front==0 && rear==MAX_SIZE-1)||(rear=front-1))
    {
        printf("Dequeue Overflow\n");
        return;
    }
    if(front==-1)
    {
        front=rear=0;
    }
    else if(front==0)
    {
        front=MAX_SIZE-1;
    }
    else{
        --front;
    }
    dequeue[front]=value;
}
void insertRear(int value)
{
    if((front==0 && rear==MAX_SIZE-1)||(rear==front-1))
    {
        printf("Dequeue Overflow\n");
        return;
    }
    if(front==-1)
    {
        front=rear=0;
    }
    else if(rear==MAX_SIZE-1)
    {
        rear=0;
    }
    else{
        ++rear;
    }
    dequeue[rear]=value;
}
void deleteFront()
{
    if(front==-1)
    {
        printf("Dequeue Underflow\n");
        return;
    }
    printf("Deleted Front:%d\n",dequeue[front]);
    if(front==rear)
    {
        front=rear-1;
    }
    else if(front==MAX_SIZE-1)
    {
        front=0;
    }
    else
    {
        ++front;
    }
}
void deleteRear()
{
    if(front==-1)
    {
        printf("Dequeue Underflow\n");
        return;
    }
    printf("Deleted Rear:%d\n",dequeue[rear]);
    if(front==rear)
    {
        front=rear=-1;
    }
    else if(rear==0)
    {
        rear=MAX_SIZE-1;
    }
    else{
        --rear;
    }
}
void displayDequeue()
{
    if(front==-1)
    {
        printf("Dequeue is empty\n");
        return;
    }
    printf("Dequeue:");
    if(rear>=front)
    {
        for(int i=front;i<=rear;++i)
        {
            printf("%d",dequeue[i]);
        }
        else
        {
            for(int i=front;i<MAX_SIZE;++i)
            {
                printf("%d",dequeue[i]);
            }
        }
        for(int i=0;i<=rear;++i)
        {
            printf("%d",dequeue[i]);
        }
    }
    printf("\n");
}
int main()
{
    insertFront(10);
    insertRear(20);
    insertRear(30);
    displayDequeue();
    deleteFront();
    displayDequeue();
    return 0;
}