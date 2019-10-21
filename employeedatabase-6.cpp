#include<iostream>
using namespace std;
class personal
{
string name,dob,marital_status,address,gender,nationality;
long int phone;
public:
	void get_personal()
	{
	cout<<"\nEnter the name:-";
	cin>>name;	
	cout<<"\nEnter your gender:-";
	cin>>gender;
	cout<<"\nEnter date of birth:-";
	cin>>dob;
	cout<<"\nMarital status:-";
	cin>>marital_status;
	cout<<"\nEnter your address:-";
	cin>>address;
	cout<<"\nEnter your nationality:-";
	cin>>nationality;	
	}
	void display_personal()
	{
	cout<<"\n******Personal Information******\n"<<endl;
	cout<<"Name:-"<<name<<endl;
	cout<<"Gender:-"<<gender<<endl;
	cout<<"Date of Birth:-"<<dob<<endl;
	cout<<"Marital status:-"<<marital_status<<endl;
	cout<<"Address:-"<<address<<endl;
	cout<<"Nationality:-"<<nationality<<endl;
	}
};

class professional
{
string designation,experience,skill,specialization;
int salary;
public:
	void get_professional()
	{
	cout<<"\nEnter your designation:-";
	cin>>designation;
	cout<<"\nHow many years of experience do you have?"<<endl;
	cin>>experience;	
	cout<<"\nEnter your skills:-";
	cin>>skill;
	cout<<"\nYour specialization:-";
	cin>>specialization;	
	cout<<"\nHow much salary do you expect?"<<endl;
	cin>>salary;
	}
	void display_professional()
	{
	cout<<"\n******Professional Information******\n"<<endl;
	cout<<"Designation:-"<<designation<<endl;
	cout<<"Experience:-"<<experience<<endl;
	cout<<"Skills:-"<<skill<<endl;
	cout<<"Specialization:-"<<specialization<<endl;
	cout<<"Expected salary:-"<<salary<<endl;
	}
};

class academics
{
string degree,hobby,grade,project;
public:
	void get_academic()
	{
	cout<<"\nEnter your degree:-";
	cin>>degree;
	cout<<"\nEnter your hobby:-";
	cin>>hobby;
	cout<<"\nEnter grade:-";
	cin>>grade;
	cout<<"\nEnter the name of project you have done(if any):-";
	cin>>project;
	}
	void display_academic()
	{
	cout<<"******Academic Information******"<<endl;
	cout<<"Degree:-"<<degree<<endl;
	cout<<"Hobby:-"<<hobby<<endl;
	cout<<"Grade:-"<<grade<<endl;
	cout<<"Project:-"<<project<<endl;
	}
};

class biodata:public personal,public professional,public academics
{
public:
	void get()
	{
	get_personal();
	get_professional();
	get_academic();
	}
	void put()
	{
	display_personal();
	display_academic();		
	display_professional();
	}

};

int main()
{
biodata b;
b.get();
b.put();
return 0;
}
