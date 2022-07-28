//class creation and accessing it with its instance(object)
/*
#include<iostream>
using namespace std;
//class student
class student{
	public:
		int id;
		string name;
};
int main()
{
	//object creation : s1
	student s1;
	s1.id=200;
	s1.name="gurjeet";
	cout<<s1.id<<endl;
	cout<<s1.name<<endl;
}
*/

//C++ Class Example: Initialize and Display data through method

/*#include<iostream>
using namespace std;
class employee{
	public:
		int id;
		string name;
		int salary;
	void insert(int i,string n,int s)
	{
		id=i;
		name=n;
		salary=s;
	}
	void display()
	{
		cout<<id <<" "<<name<<" "<<salary <<endl;
	}
};

int main()
{
	employee e1;		//object of a employee
	employee e2;
	e1.insert(101,"suresh",2000);
	e2.insert(102,"ramesh",3000);
	e1.display();
	e2.display();
}
*/

// CONSTRUCTOR
//Default constructor

/*#include<iostream>
using namespace std;
class employee{
	public:
		employee()
		{
			cout<<"Default constructor called "<<endl;
		}
};

int main()
{
	employee e1;
	employee e2;
}*/


//Parameterised constructor
/*#include<iostream>
using namespace std;
class student{
	public:
		int rollno;		//datamember of class
		string name;
		int marks;
	//parameterized constructor
	student(int r,string n,int m)
	{
		rollno = r;
		name = n;
		marks = m;	
	}
	void display()
	{
		cout<<rollno <<" "<< name <<" "<< marks<<endl;
	}	
};
int main()
{
	student s1= student(1,"gurjeet",75);
	student s2= student(2,"surjeet",76);
	
	s1.display();
	s2.display();
}
*/

//DESTRUCTOR VS CONSTRUCTOR

/*#include<iostream>
using namespace std;
class employee{
	public:
		employee()
		{
			cout<<"constructor called "<<endl;
		}
		~employee()
		{
			cout<<"Destructor called "<<endl;
		}
};

int main()
{
	employee e1;
}*/

//this Keyword

/*#include<iostream>
using namespace std;
class employee{
	public:
	int id;
	string name;
	int salary;
		employee(int id,string name,int salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display()
		{
			cout<<id<<" "<<name<<" "<<salary<<endl;
		}
};

int main()
{
	employee e1=employee(101,"gurjeet",2000);
	employee e2=employee(102,"surjeet",3000);
	
	e1.display();
	e2.display();
}*/



//STATIC KEYWORD

/*#include<iostream>
using namespace std;
class Account{
	public:
	int accno;
	string name;
	static float roi;
		Account(int accno,string name)
		{
			this -> accno= accno;
			this -> name= name;			
		}
		void display()
		{
			cout<<accno<<" "<<name<<" "<<roi<<endl;
		}
};

float Account::roi=2.8;

int main()
{
	Account a1=Account(10001,"ramesh");
	Account a2=Account(10002,"suresh");
	
	a1.display();
	a2.display();
}*/

//C++ static field example: Counting Objects
/*#include<iostream>
using namespace std;
class Account{
	public:
		int accno;
		string name;
		static int count;
	Account(int accno,string name)
	{
		this->accno=accno;
		this->name=name;
		count++;
	}
	void display()
	{
		cout<<accno<<" "<<name<<endl;
	}
};
int Account::count=0;

int main()
{
	Account a1=Account(101,"ramesh");
	Account a2=Account(102,"suresh");
	Account a3=Account(103,"rajesh");
	
	a1.display();
	a2.display();
	a3.display();
	
	cout<<"total entries :"<<Account::count;
}*/

//STRUCTURE

/*#include<iostream>
using namespace std;
struct rectangle{
	int width;
	int height;
};

int main()
{
	rectangle rec;
	rec.width=8;
	rec.height=10;
	cout<<"the area of rectangle is :"<<(rec.width*rec.height)<<endl;
}*/

/*#include<iostream>
using namespace std;
struct rectangle{
	int height;
	int width;
	rectangle(int w,int h)
	{
		width=w;
		height=h;
	}
	void area()
	{
		cout<<"area of rectangle :"<<(width*height);
	}
};
int main()
{
	rectangle r=rectangle(8,10);
	r.area();
}*/

//ENUMERATION
/*
#include<iostream>
using namespace std;
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
int main()
{
	week day;
	day=friday;
	cout<<"day :"<<day+1<<endl;
}
*/
