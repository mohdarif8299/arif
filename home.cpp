#include<iostream>
using namespace std;
class student
{
	int roll,marks1,marks2,marks3,marks4,marks5,flag;
	float marks,p;
	string name;
	public:
		void input()
		{
			cin>>name;
			cout<<"enter roll no of student :";
			cin>>roll;
			cout<<endl<<"enter marks in COMPUTER ARCHITECTURE :"<<endl;
			cin>>marks1;
			cout<<"enter marks in ELECTRONICS :"<<endl;
			cin>>marks2;
			cout<<"enter marks in OOP'S :"<<endl;
			cin>>marks3;
			cout<<"enter marks in SIGNALS AND SYSTEM :"<<endl;
			cin>>marks4;
			cout<<"enter marks in NUMERICAL METHOD :"<<endl;
			cin>>marks5;
		     calculate();
		}
		
		void output()
		{
			cout<<"total marks is: "<<marks<<endl;
			cout<<"percentage is: "<<p<<endl;
			if(flag=1)
			{
				cout<<"He/She is p@ssed"<<endl;
			}
			else
			{
				cout<<"He/She is f@iled"<<endl;
			}
		}
		private:
			 void calculate()
			{
				marks=marks1+marks2+marks3+marks4+marks5;
				p=(marks/250)*100;
				if(p>=40)
				{
					flag=1;
				}
				else
				{
					flag=0;
				}
				
			}
	
	public:
	student();
};



student::student()
{
	roll=0;
	marks1=0;
	marks2=0;
	marks3=0;
	marks4=0;
	marks5=0;
}
int main()
{
	student s,s1;
	cout<<"enter name of student1 :"<<endl;
	s.input();
	cout<<"the result of student 1 is: "<<endl;
	s.output();
	cout<<"enter name of student2 :"<<endl;
	s1.input();
	cout<<"the result of student 2 is: "<<endl;
	s1.output();
	return 0;
}