#include<iostream>
#include<stdexcept>
using namespace std;
main()
{
    int rno,fee;
    char_name[50];
    cout<<"Enter the Roll Number:";
    cin>>rno;
    cout<<"\nEnter the Name:";
    cin>>name;
    cout<<"\nEnter the Fee:";
    cin>>fee;
    ofstream fout("d:/student.doc");
    fout<<rno<<"\t"<<name<<"\t"<<fee;
    fout.close();
    ifstream fin("d:/student.doc");
    fin>>rno>>name>>fee;
    fin.close();
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    return 0;
}