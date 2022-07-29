//FRIEND FUNCTION

/*#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		void input()
		{
			cin>>a>>b;
		}
		friend void add(A obj);
};
void add(A obj)
{
	cout<<obj.a+obj.b;
}
int main()
{
	A a;
	a.input();
	add(a);
}*/

#/*include<iostream>
using namespace std;
class B;
class A{
	int x;
	public:
		void setdata(int i)
		{
			x=i;
		}
		friend void min(A,B);
};
class B{
	int y;
	public:
		void setdata(int i)
		{
			y=i;
		}
		friend void min(A,B);
};
void min(A a,B b)
{
	if(a.x<=b.y)
		cout<<a.x<<endl;
	else
		cout<<b.y<<endl;
}
int main()
{
	A a;
	B b;
	a.setdata(10);
	b.setdata(29);
	min(a,b);
}
*/

//friend class
/*#include<iostream>
using namespace std;
class A{
	int x=5;
	friend class B;
};
class B{
	public:
		void display(A a)
		{
			cout<<"value of x is : "<<a.x<<endl;
		}
};
int main()
{
	A a;
	B b;
	b.display(a);
}*/

//INHERITANCE

//SINGLE_LEVEL
/*#include<iostream>
using namespace std;
class account{
	public:
		float salary=8000;
};
class teacher :public account{
	public:
	float bonus=2000;
};
int main()
{
	teacher T;
	T.bonus=2000;
	T.salary=8000;
	cout<<T.bonus<<" "<<T.salary;
}*/

/*#include<iostream>
using namespace std;
class Animal{
	public:
		void eat()
		{
			cout<<"eating"<<endl;
		}
};
class dog:public Animal{
	public:
		void bark()
		{
			cout<<"barking"<<endl;
		}
};
int main()
{
	dog d;
	d.bark();
	d.eat();
}*/


//MULTILEVEL 
/*#include<iostream>
using namespace std;
class Animal{
	public:
		void eat()
		{
			cout<<"eating"<<endl;
		}
};
class dog:public Animal{
	public:
		void bark()
		{
			cout<<"barking"<<endl;
		}
};
class puppy:public dog{
	public:
		void sleep()
		{
			cout<<"sleeping"<<endl;
		}	
};

int main()
{
	puppy p;
	p.bark();
	p.sleep();
	p.eat();
}*/


//MULTIPLE INERITANCE
/*#include<iostream>
using namespace std;
class A{
	protected:
		int x;
	public:
		int get_A(int n)
		{
			x=n;
		}
};
class B{
	protected:
		int y;
	public:
		int get_B(int n)
		{
			y=n;
		}
};
class C:public A,public B{
	public:
		void result()
		{
			cout<<"A value :"<<x<<endl;
			cout<<"B value :"<<y<<endl;
			cout<<"sum :"<<x+y;
		}
};
int main()
{
	C c;
	c.get_A(32);
	c.get_B(28);
	c.result();
}

*/

/*#include<iostream>
using namespace std;
class A{
	public:
		void display()
		{
			cout<<"class A"<<endl;
		}
};
class B{
	public:
		void display()
		{
			cout<<"class B"<<endl;
		}
};
class C:public A,public B{
	public:
		void show()
		{
			A::display();
			B::display();
			cout<<"class C"<<endl;
		}
};
int main()
{
	C c;
	c.show();
}*/

