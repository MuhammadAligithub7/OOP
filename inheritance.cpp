#include<iostream>  // calling parent class consructor through child class 
#include<string>
using namespace std;
class parent
{
	private:
	int age;
	string name;
	public:	
	parent(int x,string y)
	{
	age=x;
	name=y;	
	}
	void show()
	{
	cout<<"age is : "<<age<<" parent name is :"<<name<<endl;	
	}
};

class child : public parent
{
	private:
	int age;
	string name;
	public:	
	child(int x,string y,int a, string b):parent(a,b)
	{
		age=x;
		name=y;
	}
	void show()
	{
	cout<<"age is : "<<age<< " child name is  :"<<name<<endl;	
	parent::show();
	}
};
main()
{
child obj(20,"ali",40,"naveed gul");
obj.show();

}
