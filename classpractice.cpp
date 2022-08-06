/*#include<iostream>
using namespace std;
class myclass{
	public:
		int mynum;
		string mystring;
};
int main()
{
	myclass obj;
	obj.mynum=300;
	obj.mystring="gurjeet";
	
	myclass obj2;
	obj2.mynum=400;
	obj2.mystring="gurje";
	
	cout<<obj.mynum<<" "<<obj.mystring<<endl;
	cout<<obj2.mynum<<" "<<obj2.mystring<<endl;
}*/


//class methods - outside the class & inside the class
/*#include<iostream>
using namespace std;
class myclass{
	public:
		void mymethod()
		{
			cout<<"this function is defined inside the class";
		}
		void mymethod2();
};
void myclass::mymethod2()
{
	cout<<"this function is defined outside the class";
}
int main()
{
	myclass obj;
	obj.mymethod();
}*/

//using parameters on outside scope of class

/*#include<iostream>
using namespace std;
class myclass{
	public:
		int speed(int carspeed);
		
};
int myclass::speed(int carspeed)
{
	cout<<"carspeed"<<carspeed;
}
int main()
{
	myclass obj;
	obj.speed(500000);
}
*/

//constructor
/*#include<iostream>
using namespace std;
class myclass{
	public:
		myclass()
		{
			cout<<"constructor called";
		}
};
int main()
{
	myclass obj;
}*/

//constructor with parameter
/*#include<iostream>
using namespace std;
class myclass{
	public:
	int num;
	string name;
	int income;
	myclass(int n,string na,int i)
	{
		this->num=n;
		this->name=na;
		this->income=i;
	}
	void display()
	{
		cout<<num<<" "<<name<<" "<<income<<endl;
	}
};
int main()
{
	myclass obj=myclass(1,"abs",20000);
	obj.display();
}*/

//constructor defined outside the class
/*#include<iostream>
using namespace std;
class myclass{
	public:
		int num;
		string name;
	myclass(int n,string s);
	
};
myclass::myclass(int n,string s)
{

	this->num=n;	
	this->name=s;
	
}
int main()
{
	myclass obj=myclass(5,"abc");
	cout<<obj.name<<" "<<obj.num;
}*/

//using setter - getter to access private and public data member
/*#include<iostream>
using namespace std;
class myclass{
	int num;
	public:
	void setnum(int n)
	{
		this->num=n;
	}
	int getnum()
	{
		return num;
	}
};
int main()
{
	myclass obj;
	obj.setnum(50);
	cout<<obj.getnum();	
}*/

//inheritance
/*#include<iostream>
using namespace std;
class vehicle{
	public:
		string brand="BMW"; 
	void honk()
	{
		cout<<"honk honk honk";
	}
};
class car:public vehicle{
	public:
		string model="E21";
	
};

int main()
{
	car obj;
	obj.honk();
	cout<<endl;
	cout<<obj.brand;
}*/

//multilevel
/*#include<iostream>
using namespace std;
class A{
	public:
		void show()
		{
			cout<<"this is A class";
		}
};
class B: public A
{	
};
class c:public B
{
};
int main()
{
	c obj;
	obj.show();
}*/

//multiple
/*#include<iostream>
using namespace std;
class A{
	public:
		void show()
		{
			cout<<"this is A class";
		}
};
class B:public A{
	public:
		void display()
		{
			cout<<"this is B class";
		}
};
class C:public A,public B{
	
};
int main()
{
	C obj;
	obj.display();
	obj.show();
}*/

//exceptional handling
#include<iostream>
using namespace std;
int main()
{
	try{
		int age=19;
		if(age>21)
		{
			cout<<"acess granted";
		}
		else
		{
			throw(age);
		}
	}
	catch(int mynum)
	{
		cout<<"acess is denied age is 19";
		cout<<"age is :"<<mynum;
	}
}
