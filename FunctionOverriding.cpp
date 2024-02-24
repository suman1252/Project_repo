//Function Overriding
/*
#include<iostream>
using namespace std;

class base
{
    public:
    void msg()
    {
        cout<<"Base Class";
    }
};
class derived:public base
{
    public:
    void msg()
    {
        base::msg();
        cout<<"Derived Class";
    }
};
int main()
{
    derived C;
    C.msg();
    return 0;
}    */

// write a program to 
#include<iostream>
using namespace std;

class polygon
{
    public:
    void area()
    {
        int a=5,p=6;
        cout<<"Area of polygon: "<<a*p<<endl;
    }
};
class rectangle:public polygon
{
    public:
    void area()
    {
        int l=7,b=8;
        polygon::area();
        cout<<"Area of rectangle: "<<l*b<<endl;
    }
};
class triangle:public rectangle
{
   public:
   void area()
   {
       int b=6,h=7;
       rectangle::area();
       cout<<"Area of triangle: "<<(b*h)/2;
   }
};
int main()
{
    triangle C;
    C.area();
    return 0;
}  