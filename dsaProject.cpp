#include<iostream>
#include<fstream>
#include<conio.h>
#include<unistd.h>
#include<dos.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class customer //customer class
{
	public:
		string customername;
		string carmodel;
		string carnumber;
		char data;
		//variables defined in this class are in public mode
};

class rent : public customer // inherited class from customer class
{
	public:
		int days=0;
		int rentalfee=0; //additional int variables defined
		void data()
		{
			int login();
			login();
			cout<<"\t\t\t\tPlease Enter Your Name:"; //taking data from the user
			cin>> customername;
			cout<<endl;
			do
			{
				cout<<"\t\t\t\tPlease Select A Car"<<endl; //giving user a choice to select among three
				cout<<"\t\t\t\tEnter 'A' for Tesla 2011."<<endl;
				cout<<"\t\t\t\tEnter 'B' for Hyundai 2015."<<endl;
				cout<<"\t\t\t\tEnter 'C' for Ford 2017."<<endl;
				cout<<endl;
				cout<<"Choose a Car From The Above Options:";
				cin>>carmodel;
				cout<<endl;
				cout<<"------------------------------------------------------------------------------"<<endl;
				if(carmodel=="A")
				{
					system("CLS");
					
					cout<<"You have choosed Tesla Model 2011"<<endl;
					ifstream inA("A.txt"); //displaying details of model A
					char str[200];
					while(inA) {
						inA.getline(str,200);
						if(inA) cout<<str<<endl;
						
					}
					sleep(2);
				}
				if(carmodel=="B")
				{
					system("CLS");
					
					cout<<"You have choosed Hyundai 2015"<<endl;
					ifstream inB("B.txt"); //displaying details of model B
					char str[200];
					while(inB) {
						inB.getline(str,200);
						if(inB) cout<<str<<endl;
						
					}
					sleep(2);
			    }
			    if(carmodel=="C")
				{
					system("CLS");
					
					cout<<"You have choosed Ford 2017"<<endl;
					ifstream inC("C.txt"); //displaying details of model C
					char str[200];
					while(inC) {
						inC.getline(str,200);
						if(inC) cout<<str<<endl;
						
					}
					sleep(2);
				}
				if(carmodel != "A" && carmodel != "B" && carmodel != "C")
				cout<<"Invalid Car Model. Please Try Again!"<<endl;
			}
		while(carmodel != "A" && carmodel != "B" && carmodel != "C");
		cout<<"---------------------------------------------------------------------------------";
		cout<<"Please Provide Following Information:"<<endl;
		cout<<"Please select a Car No. :";
		cin>>carnumber;
		cout<<"Number of days you wish to rent the car:";
		cin>>days;
	}
	void calculate()
	{
		sleep(1);
		system("CLS");
		cout<<"Calculating rent. Please wait....."<<endl;
		sleep(2);
		if(carmodel == "A" || carmodel == "a")
		rentalfee=days*56;
		if(carmodel == "B" || carmodel == "b")
		rentalfee=days*60;
		if(carmodel == "C" || carmodel == "c")
		rentalfee=days*75;
	}
	void showrent()
	{
		cout<< " \n\t\t                    CAR RENTAL - CUSTOMER INVOICE             "<<endl;
		cout<< " \t\t /////////////////////////////////////////////////////////////////"<<endl;
		cout<< " \t\t | Invoice No. :"<<"---------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
		cout<< " \t\t | Customer Name:"<<"--------------|"<<setw(10)<<customername<<" |"<<endl;
		cout<< " \t\t | Car Model :"<<"-----------------|"<<setw(10)<<carmodel<<" |"<<endl;
		cout<< " \t\t | Car no. :"<<"-------------------|"<<setw(10)<<carnumber<<" |"<<endl;
		cout<< " \t\t | Number of days:"<<"-------------|"<<setw(10)<<days<<" |"<<endl;
		cout<< " \t\t | Your rental Amount is:"<<"------|"<<setw(10)<<rentalfee<<" |"<<endl;
		cout<< " \t\t | Caution Money:"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
		cout<< " \t\t | Advance:"<<"--------------------|"<<setw(10)<<"0"<<" |"<<endl;
		cout<< " \t\t_________________________________________________________"<<endl;
		cout<< "\n"<<endl;
		cout<< " \t\t | Total Rental Amount is :"<<"----|"<<setw(10)<<rentalfee<<" |"<<endl;
		cout<< " \t\t #This is a computer generated invoice and it does not"<<endl;
		cout<< " \t\t require an authorised signature #"<<endl;
		cout<<" "<<endl;
		cout<< " \t\t//////////////////////////////////////////////////////////////////"<<endl;
		cout<< " \t\t You are advised to pay up the amount before due date."<<endl;
		cout<< " \t\t Otherwise penalty fee will be applied"<<endl;
		cout<< " //////////////////////////////////////////////////////////////////////"<<endl;
		int f;
		system("PAUSE");
		system("CLS");
		ifstream inf("thanks.txt");
		char str[300];
		while(inf) {
			inf.getline(str, 300);
			if(inf) cout<< str << endl;
		}
		inf.close();
		}
};
class welcome //welcome class
{
	public:
		int welcum()
		{
			ifstream in("welcome.txt"); //displaying welcome text ASCII image text on output screen
			if(! in){
				cout<<"cannot open input file. \n";
				
			}
			char str[1000];
			while(in){
				in.getline(str, 1000); //delim defaults to \n
				if(in) cout <<str <<endl;
			}
			in.close();
			sleep(1);
			cout<<"\nStaring the program please wait....."<<endl;
			sleep(1);
			cout<<"\nLoading up files......."<<endl;
			sleep(1); //function which waits for n unit of times
			system("CLS");
		}
	};
	int main()
	{
		welcome obj1; //object created for welcome class
		obj1.welcum(); //welcum function is called
		rent obj2;
		//object created for rent class and further member functions are called
		obj2.data();
		obj2.calculate();
		obj2.showrent();
		
		return 0; // end of the program
	}
	int login()
	{
		string pass ="";
		char ch;
		cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t    CAR RENTAL SYSTEM \n\n";
		cout<<"\t\t\t\t\t---------------------------------";
		cout<<"\n\t\t\t\t\t\t LOGIN \n";
		cout<<"\t\t\t\t\tEnter Password: ";
		ch= _getch();
		while(ch != 13){ //character 13 is enter
		pass.push_back(ch);
		cout <<'*';
		ch= _getch();
		}
		if(pass=="Suman"){
			cout<<" \n\n\n\t\t\t\t\t\t Access Granted! \n";
			system("PAUSE"); 
			system("CLS");
		}
		else{
			cout<<"\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t Please Try Again\n\n";
			system("PAUSE");
			system("CLS");
			login();
		}
	}

	//Password = Suman
