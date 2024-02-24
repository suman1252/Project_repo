#include<iostream>
using namespace std;

int count=0;
class alpha{
    public:
    alpha(){
        count++;
        cout<<"No. of obj Created"<<count<<endl;
    }
    ~alpha(){
        cout<<"No. of obj destructed"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"ENter main\n";
    alpha a1,a2,a3,a4;
    {
        cout<<"ENter block 1"<<endl;
        alpha a5;
    }
    {
        cout<<"Enter block 2"<<endl;
        alpha a6;
    }
    cout<<"Return main"<<endl;
    return 0;
}