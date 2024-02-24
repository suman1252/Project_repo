//operator overloading


#include<iostream>
using namespace std;

class A 
{
    private:
       int weight;
    public:
    A(int x=0)
    {
        weight=x;
    }
    void PrintValue()
    {
        cout<<endl<<"weight is "<<weight;
    }
    A operator +(A w)
    {
        A temp;
        temp.weight = weight+w.weight;
        return temp;
    }
};
    
int main()
{
    int a=63,b=24,c=0;
    c=a+b;
    cout<<endl<<"Total"<<c;

    A person1(63);
    A person2(84);
    A total;
    
    total = person1+person2;
    total.PrintValue();
    return 0;
}    


/*
#include<iostream>
#include<string>
using namespace std;

class A 
{
    private:
       int weight;
    public:
    A(int x=0)
    {
        weight=x;
    }
    void PrintWeight()
    {
        cout<<endl<<"weight is "<<weight;
    }
    A operator ++()
    {
       ++weight;    //pre increment
    }
    void operator ++(int)
    {
        weight++;   //post increment
    }
};
int main()
{
    A John(78);
    ++John;
    John++;
    John.PrintWeight();
    return 0;
}   */

/*
#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    void show()
    {
        cout<<length<<endl;
        cout<<breadth<<endl;
    }
};

class Cuboid:public Rectangle{
    public:
    int height;
    void display()
    {
        cout<<height;
    }
};
// int main()
  //  {
    //    Cuboid C;
    //    C.length=10;
    //    C.breadth=20;
    //    C.height=30;
    //    C.show();
    //    C.display();
    //    return 0;
    } 

int main()
{
    Rectangle r;
    r.length=10;
    r.breadth=20;
    r.show();
    return 0;
}  */


/*
#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    void show()
    {
        cout<<length<<endl;
        cout<<breadth<<endl;
    }
};
class Cuboid:public Rectangle{
    public:
    int height;
    void display()
    {
        cout<<height<<endl;
    }
    int area()
    {
        int a=length*breadth;
        return a;
    }
};
int main()
    {
        Cuboid C;
        C.length=10;
        C.breadth=20;
        C.height=30;
        C.show();
        C.display();
        int result=C.area();
        cout<<"Area of rectangle is:"<<result;
       return 0;
    }   */

/*
    #include<iostream>
    using namespace std;
    class Base
    {
        public:
        Base
        {
            cout<<"Default Constructor";
        }
        Base(int b)
        {
            cout<<"Paramatrised Constructor";
        }
    };
    class Derived:public Base
    {
        //Empty
    };
    int main()
    {
        derived D1;
        derived D2(4);
        return 0;
    }  */