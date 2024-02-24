#include<iostream>
using namespace std;
class Base
{
    public:
    int a,b;
    void set_ab(void)
    {
        cout<<"Enter a,b: ";
        cin>>a>>b;
    }
};
class Sum:public Base
{
    public:
    void sum_res(void)
    {
        cout<<"Sum: "<<(a+b)<<endl;
    }
};
class multiply:public Base
{
    public:
    void mul_res(void)
    {
        cout<<"Multiply: "<<(a*b)<<endl;
    }
};
int main()
{
    Sum S;
    S.set_ab();
    S.sum_res();
    multiply mul;
    mul.set_ab();
    mul.mul_res();
    return 0;
}
