/*
Create an abstract base class called person. 
Use this class to store name and age of a person. 
Derive two specific classes called student and professor from base class. 
Student class is having a variable cpi of double type and professor class is 
having a variable no_of_publications. Create one virtual function is_outstanding
which declares a person as outstanding if he is with cpi greater then 9.0 
or no_of_publication is greater than 25.Write main() also for implementing 
above classes.*/

#include<iostream>
#include<cstring>
#include<conio.h>
#include<stdio.h>
using namespace std;
class person
{
	protected:
		char name[50];
		int age;
	public:
		person(char *s,int a)
		{
			strcpy(name,s);
			age=a;
		}
		virtual void is_outstanding()
		{
		}
};

class student:public person
{
	double cpi;
	public:
		student(char *s,int a,double p):person(s,a)
		{
			cpi=p;
		}
		
	void is_outstanding();
};

class professor:public person
{
	int no_pub;
	public:
		professor(char *s,int a,int t):person(s,a)
		{
			no_pub=t;
		}
		void is_outstanding();
};

void student::is_outstanding()
{
	if(cpi>9)
	cout<<name<<" is Outstading !\n";
	else
	cout<<name<<" is Not Outstanding !\n";
}

void professor::is_outstanding()
{
	if(no_pub>25)
	cout<<name<<" is Outstading !\n";
	else
	cout<<name<<" is Not Outstanding !\n";
}
int main()
{
	char *names=new char[30];
	char *namep=new char[30];
	int age,no_pub,age1;
	double cpi;
	cout<<"Enter student's name = ";
	cin>>names;
	cout<<"Enter student's age = ";
	cin>>age;
	cout<<"Enter student's cpi =";
	cin>>cpi;	
	cout<<"Enter Professor's name = ";
	cin>>namep;
	cout<<"Enter Prof's age = ";
	cin>>age1;
	cout<<"Enter professor's no. of publications = ";
	cin>>no_pub;
	professor stud1(namep,age1,no_pub);
	student stud2(names,age,cpi);
	person *ptr1;person *ptr2;
	ptr1=&stud1;
	cout<<"\n";
	ptr1->is_outstanding();
	ptr2=&stud2;
	ptr2->is_outstanding();
	return 0;
}
