#include<iostream>
using namespace std;

class hotel{
	int id;
	string name;
	string type;
	int rating;
	int Est_yr;
	int staff;
	int rooms;
	static int idcounter;
	static string city;
	
	public:
		void setdata()
		{
			id = idcounter++;
			cout<< "Enter hotel id:";
			cin>>id;
			cout<< "Enter hotel Name:";
			cin>>name;
			cout<< "Enter hotel type:";
			cin>>type;
			cout<< "Enter hotel ratings:";
			cin>>rating;
			cout<< "Enter hotel Established year:";
			cin>>Est_yr;
			cout<< "Enter hotel staff:";
			cin>>staff;
			cout<< "Enter hotel rooms:";
			cin>>rooms;
		}
		
		void setArrayElement(int index,int n)
		{
			cout<< "Hotel id:" << index+1<<"/" << n << endl;
			 id =idcounter++;
			cout<< "Enter hotel id:";
			cin>>id;
			cout<< "Enter hotel Name:";
			cin>>name;
			cout<< "Enter hotel type:";
			cin>>type;
			cout<< "Enter hotel ratings:";
			cin>>rating;
			cout<< "Enter hotel Established year:";
			cin>>Est_yr;
			cout<< "Enter hotel staff:";
			cin>>staff;
			cout<< "Enter hotel rooms:";
			cin>>rooms;
		}
		
		static void sethotelcity(){
			cout << "Enter City:";
			cin >> city;
		}
		
		static void updatehotelcity(){
			cout << "Enter New City:";
			cin >> city;
		}
		
		void getdata()
		{
			cout << "id\t:" << id << endl
				 << "name\t:" << name << endl
				 << " type\t:" << type << endl
				 << "rating\t:" << rating << endl
				 << "Est_yr\t:" << Est_yr << endl
				 << "staff\t:" << staff << endl
				 << "rooms\t:" << rooms << endl;
		}	
};

string hotel::city = "ahemdabad";
int hotel::idcounter =101;
