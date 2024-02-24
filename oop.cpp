// BY using default constructor

#include <iostream>
using namespace std;

class A
{
    private:
    string name;
    int age;
    float height;
    public:
      A(){
        name = "fool";
        age = 16;
        height =2.3f;
      }
      string getdata() {
        return name;
      }
      int getdata1(){
        return age;
      }
      float getdata2(){
        return height;
      }
};
int main(){
      A null;
cout<<"name is "<<null.getdata()<<endl;
cout<<"age is "<<null.getdata1()<<endl;
cout<<"height is "<<null.getdata2();
}