#include<iostream>
using namespace std;
class girl;
class boy
{
	int salary;
	public:
	void input()
	{
		cout<<"enter the salary of boy";
		cin>>salary;
	}
	void output()
	{
		cout<<"salary left with boy  is only:"<<salary<<endl;
    }
	friend  void getmoney(boy &x,girl &y);
	friend class girl;
};
class girl 
{
	int salary;
	public:
	void input()
	{
		cout<<"enter the salary of girl";
		cin>>salary;
	}
	void output()
	{
		cout<<"salary left with girl after:"<<salary;
    }
	friend  void getmoney(boy &x,girl &y);
    

};
void getmoney(boy &x,girl &y)
{
	y.salary+=x.salary;
	x.salary=0;
}
int main()
{
	boy b;
	girl g;
	b.input();
	g.input();
    getmoney(b,g);
	b.output();
    g.output();
    return 0;
}
