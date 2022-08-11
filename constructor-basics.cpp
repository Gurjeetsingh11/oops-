//constructor within the class
/*#include<iostream>
using namespace std;
class student{
	int rollno;
	string name;
	int marks;
	public:
	//constructor
	student()
	{
		cout<<"enter rollnumber : ";
		cin>>rollno;
		cout<<"enter the student name ";
		cin>>name;
		cout<<"enter the marks :";
		cin>>marks;
	}
	
	void display()
	{
		cout<<rollno<<" "<<name<<" "<<marks<<endl; 
	}
};
int main()
{
	student s;
	s.display();
}

//constructor outside the class
/*#include<iostream>
using namespace std;
class student{
	int rollno;
	int marks;
	string name;
	public:
		student();
	void display()
	{
		cout<<rollno<<" "<<marks <<" "<<name<<endl;
	}
};
//constructor defined outside the  class using scope resolution
student :: student()
{
		cout<<"enter rollnumber : ";
		cin>>rollno;
		cout<<"enter the student name ";
		cin>>name;
		cout<<"enter the marks :";
		cin>>marks;
}
int main()
{
	student s;
	s.display();
}*/

//DEFAULT CONSTRUCTOR
/*#include<iostream>
using namespace std;
class check{
	public:
		int a,b;
	//default constructor
	check()
	{
		a=10;
		b=20;
	}
};
int main()
{
	check c;
	cout<<c.a<<" "<<c.b<<endl;
}*/

//parameterised constructor
/*#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	//parameterised constructor
	A(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	int getx()
	{
		return x;
	}	
	int gety()
	{
		return y;
	}
};
int main()
{
	A obj(10,20);
	cout<<obj.getx()<<" "<<obj.gety()<<" ";
}*/

//constructor overloading
/*#include<iostream>
using namespace std;
class A{
	public:
		int area;
	A()
	{
		area=0;
	}
	A(int x,int y)
	{
		area=x*y;
	}
	void display()
	{
		cout<<area<<endl;
	}
};
int main()
{
	A obj;
	A obj2(10,20);
	obj.display();
	obj2.display();
	
}*/

//copy cunstructor
/*#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(int x1,int y1)
	{
		x=x1;
		y=y1;	
	}
	A(const A&A1)
	{
		x=A1.x;
		y=A1.y;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};
int main()
{
	A A1(10,20);
	A A2=A1;
	cout<<A1.getx()<<" "<<A1.gety()<<" "<<endl;
	cout<<A2.getx()<<" "<<A2.gety()<<" "<<endl;
}*/


//destructor 

/*#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"constructor called"<<endl;
		}
		~A()
		{
			cout<<"destructor called"<<endl;
		}
};
int main()
{
	A obj;
}*/

//destructor example
/*#include<iostream>
using namespace std;
int count=0;
class A{
	public:
		A()
		{
			count++;
			cout<<"object created : "<<count<<endl;
		}
		~A()
		{			
			cout<<"object destroyed :"<<count<<endl;
			count--;
		}
};
int main()
{
	A a1,a2,a3,a4;
}*/
