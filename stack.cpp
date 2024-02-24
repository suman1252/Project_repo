/*
//push-pop operations in stack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>stack;
    stack.push(21);  //The value pushed on the stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
    stack.push(num);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.push(100);
    while(stack.empty()==false)
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
}  */

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    
    stack<int>stack;
    stack.push(21);  //The value pushed on the stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
    stack.push(num);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.push(100);
    while(stack.empty()==false)
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
} 
