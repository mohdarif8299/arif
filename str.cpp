#include<iostream>
using namespace std;
class str
{
	string a,s3;
	public:
		 friend void operator>>(istream &arif,str &obj)
	{
		cout<<"enter the string:";
		arif>>obj.a;
	}
	friend void operator<<(ostream &dost,str &obj)
	{
		dost<<"string is:"<<obj.a;
	}
	str()
	{
		s3={' '};
	}
	str operator+(str obj)
	{
		    str temp;
            temp.a=a+s3+obj.a;
			return temp;
			
	}
};
int main()
{
	str obj1,obj2,obj3;
	cin>>obj1;
	cin>>obj2;
	obj3=obj1+obj2;
	cout<<obj3;
	return 0;
}