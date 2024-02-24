/*
#include<iostream>
using namespace std;

class Student
{
    protected:ṇ
      int roll_no;
    public:
      get.number(int);
      put.number();
};
void Student::get.number(int a)
{
    roll_no=a;
}
void Student::put.number()
{
    cout<<"Roll No. = "<<roll_no;
}
class test:public Student
{
    protected:
       float sub1;
       float sub2;
    public:
       get.marks(float,float);
       put.marks();
};
void test::get.marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void test::put.marks()
{
    cout<<"Sub 1 = "<<sub1<<endl;
    cout<<"Sub 2 = "<<sub2<<endl;
}
class result:public test
{
    float total;
    public:
      void display();
};
void result::display()
{
    total = sub1+sub2;
    put.number();
    put.marks();
    cout<<"Total = "<<total;
}
int main()
{
    result Student1;
    Student1.get.number();
    Student1.get.marks(30,40);
    Student1.display();
    return 0;
}  */


/*
#include<iostream>
using namespace std;
class Space
{
    int x;
    int y;
    int z;
    public:
      void getdata(int a, int b, int c);
      void dispaly(void);
      void operator-();
};
void Space::getdata(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}
void diaplay(int x, int y, int z)
{
    cout<<x<<y<<z;
}
void Space::operator -()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    Space S;
    S.getdata(10,-15,20);
    S.dispaly();
    -S;
    S.dispaly();
    return 0;
}  */

/*
#include<iostream>

using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Default Base Class "<<endl;
    }
    Base(int b)
    {
        cout<<"Default Parametrised Class "<<endl;
    }
};

    class derived:public Base
{
    public:
    derived():Base()
    {
        cout<<"Default Cons of Derived Class "<<endl;
    }
    derived(int D_arg):Base(D_arg)
    {
        cout<<"Parametrised cons of derived class ";
    }
};
int main()
{
    derived d1;
    derived d2(110);
    return 0;
}     */

#include<iostream>
using namespace std;

class Employee
{
    int id;
    char name[30];
    public:

    //Declaration of function
    void getdata();

    //Declaration of function
    void putdata();
};
//defining the function outside the class
void Employee::getdata()
{
    cout<<"Enter Id: ";
    cin>>id;
    cout<<"Enter Name: ";
    cin>>name;
}
//Defining the fuction outside the class
void Employee::putdata()
{
    cout<<id<<" ";
    cout<<name<<" ";
    cout<<endl;
}
//Driver code
int main()
{
    //This is an array of objects having maximum limit of 30 Emloyees
    Employee emp[30];
    int n,i;
    cout<<"Enter number of Employees:- ";
    cin>>n;

    //Accessing the function
    for(i=0;i<n;i++)
    emp[i].getdata();
    cout<<"Employee Data:- "<<endl;

    //Accessing the function
    for(i=0;i<n;i++)
    emp[i].putdata();
    return 0;
}