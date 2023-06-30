#include<iostream>
#include<string.h>
using namespace std;
class collage{
	public :
		int id;
		static char clg[100];
		float per;
		
class high_school{
	public :
		int id;
		char name[100];
		int roll_number;
		int stander;
		int contact;
		int age;
		char institute_name[100];
		char addres[100];
		
};


char collage::clg[100]="gujarat university ";
char high_school::h_school[100]="jb diamond";

int main()
{
	collage c1;
	high_school h1;
	
	c1.id = 5401;
	c1.per = 60.71;
	cout<<collage::clg<<endl;
	cout<<"id = "<<c1.id<<endl;
}