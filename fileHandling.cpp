//File Handling

#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream myfile;
    myfile.open("student_record.txt", ios::out);
    if(!myfile){
        cout<<"file not created";
    }
    else{
        string name;
        cin>>name;
        myfile<<name<<endl;
        myfile<<"Suman ";
    }
    myfile.close();
    myfile.open("student_record.txt", ios::in);
     while(1){
         char ch;
         myfile>>ch;
         if(myfile.eof()){
             break;
         }
         cout<<ch;
    }
   
    myfile.close();
    
    return 0;
}

