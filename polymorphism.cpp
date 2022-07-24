//function overloading

/*#include<iostream>
using namespace std;
class A{
	public:
		void sayhello()
		{
			cout<<"hello user "<<endl;
		}
		int sayhello(char name)
		{
			cout<<"hello new user"<<endl;
			return 1;
		}
		void sayhello(string name)
		{
			cout<<"hello "<<name<<endl;
		}
};
int main()
{
	A obj;
	obj.sayhello();
}


//operator overloading 

#include<iostream>
using namespace std;
class A{
	public:
		int a;
		int b;
	int add()
	{
		return a+b;
	}
	void operator + (A &obj)
	{
	/*	int val1 = this->a;
		int val2 = obj.a;
		cout<<"output :"<<val2-val1<<endl;
		
		cout<<"hello user "<<endl;
	}
	
	void operator()()
	{
		cout<<"bracket "<<this->a<<endl;
	}
};
int main()
{
	A obj1,obj2;
	
	obj1.a=4;
	obj2.a=8;
	
	obj1+obj2;
	obj1 ();
}

*/


//runtime polymorphism - method over riding 

#include<iostream>
using namespace std;
class Animal{
	public:
		void speak()
		{
			cout<<"speaking"<<endl;			
		}

};
class Dog : public Animal{
	public:
		void speak()
		{
			cout<<"barking"<<endl;
		}
};

int main()
{
	Dog obj;
	obj.speak();
}
