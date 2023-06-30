#include<iostream>
#include<string.h>

using namespace std;
class Students{
	public:
	int id;
	char name[100];
	char role[100];
	int salary;
	int expirience;
	char address[100];
	char email[100];
	char contact[100];
	
	void set()
	{
		cout<<"enter id : ";
		cin>>id;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter role : ";
		cin>>role;
		cout<<"enter salary : ";
		cin>>salary;
		cout<<"enter experiense : ";
		cin>>expirience;
		cout<<"enter address : ";
		cin>>address;
		cout<<"enter email : ";
		cin>>email;
		cout<<"enter contact : ";
		cin>>contact;
	}
	
	void get()
	{
		cout<<"id : "<<id<<endl;
		cout<<"name : "<<name<<endl;
		cout<<"role : "<<role<<endl;
		cout<<"salary : "<<salary<<endl;
		cout<<"expirience : "<<expirience<<endl;
		cout<<"address : "<<address<<endl;
		
		cout<<"email : "<<email<<endl;
		cout<<"contact : "<<contact<<endl;
	}
	
	
};

main()
{
	
   Students	s,s1,s2,s3,s4,s5,s6,s7;
   
  s.set();
  s.get();
  s1.set();
  s1.get();
  s2.set();
  s2.get();
  s3.set();
  s3.get();
  s4.set();
  s4.get();
  
	
	return 0;
}
