//FUNCTION OVERLOADING
/*#include<iostream>
using namespace std;
class A{
	public:
		void fun()
		{
			cout<<"im func with no argument"<<endl;
		}
		void fun(int a)
		{
			cout<<"im fun with int argument "<<endl;
		}
		void fun(double d)
		{
			cout<<"i am func with double argument"<<endl;
		}
};
int main()
{
	A obj;
	obj.fun();
	obj.fun(1);
	obj.fun(3.4);
}*/


//Operator overloading
/*#include<iostream>
using namespace std;
class complex{
	private :
		int real,imag;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			imag=i;
		}
		complex operator +(complex const &obj)
		{
			complex res;
			res.imag=imag+obj.imag;
			res.real=real+obj.real;
			return res;
		}
		void display()
		{
			cout<<real<<"+i"<<imag<<endl;
		}
};
int main()
{
	complex c1(12,7),c2(8,7);
	complex c3=c1+c2;
	c3.display();
}*/

//run time polymorphism without virtual function
/*#include<iostream>
using namespace std;
class Animal{
	public:
		void eat()
		{
			cout<<"eating"<<endl;
		}
};
class dog{
	public:
		void eat()
		{
			cout<<"dog is eating"<<endl;
		}
};
int main()
{
	dog d;
	d.eat();
}*/

//run time polymorphism by using 2 derived classes

/*#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw()
		{
			cout<<"drawing "<<endl;
		}
};
class rectangle:public shape{
	public:
		void draw()
		{
			cout<<"drawing rectangle"<<endl;
		}
};
class square:public shape{
	public:
		void draw()
		{
			cout<<"drawing square"<<endl;
		}
};
int main()
{
	 shape *s;                          
    shape sh;                                
       rectangle rec;    
        square sq;    
      s=&sh;    
     s->draw();     
        s=&rec;    
     s->draw();      
    s->draw();  
}*/

//function overloading -> using more than 1 function with the same name but diffrent number of type of parameter
/*#include<iostream>
using namespace std;
class A{
	public:
//diffrent parameter type
		void abc(float b)
		{
			cout<<"this is a class "<<endl;
		}
		void abc(int a)
		{
			cout<<"this is A class"<<endl;
		}
*/
//diffrent parameter interchanged
/*		void abc(int a,float b)
		{
			cout<<"this is a class "<<endl;
		}
		void abc(float a,int b)
		{
			cout<<"this is A class"<<endl;
		}
*/
//diffrent parameter numbers
/*		void abc(int a,int b,int c)
		{
			cout<<"this is a class "<<endl;
		}
		void abc(int a,int b)
		{
			cout<<"this is A class"<<endl;
		}
};
int main()
{
	A obj;
	obj.abc(1,3,2);
}*/

//method overriding
/*#include<iostream>
using namespace std;
class Animal{
	public:
		void eat()
		{
			cout<<"animal is eating";
		}
};
class dog:public Animal{
	public:
		void eat()
		{
			cout<<"dog is eating";
		}
};
int main()
{
	dog d;
	d.eat();
}*/


//operator overloading 
/*#include<iostream>
using namespace std;
class demo{
	int a;
	public:
		void getdata()
		{
			cin>>a;
		}
		void putdata()
		{
			cout<<a<<endl;
		}
	demo operator+(demo bb)
	{
		demo cc;
		cc.a=a+bb.a;
		return cc;
	}
};
int main()
{
	demo aa,bb,cc;
	aa.getdata();
	bb.getdata();
	cc=aa+bb;
	cc.putdata();
}*/


//virtual function

/*#include<iostream>
using namespace std;
class A{
	public:
		virtual void show()
		{
			cout<<"base class called";
		}
};
class B:public A{
	public:
		void show()
		{
			cout<<"derived class called";
		}
};
int main()
{
	A *ptr;
	A bb;
	ptr=&bb;
	ptr->show();
}*/

/*#include<iostream>
using namespace std;
class A{
	int a=5;
	public:
	virtual	void show()
		{
			cout<<"value of a :"<<a;
		}
};
class B :public A{
	int b=6;
	public:
		void show()
		{
			cout<<"value of b: "<<b;
		}
};

int main()
{
	A *ptr;
	B bb;
	ptr=&bb;
	ptr->show();
}*/


//abstract class 
/*
#include<iostream>
using namespace std;
class A{
	public:
		virtual void show()=0;
		void display()
		{
			cout<<"base class";
		}
};
class B: public A{
	public:
		void show()
		{
			cout<<"derived class";
		}
		
};

int main()
{
	A *ptr;
	B obj;
	//obj.display();
	ptr= &obj;
	ptr->display();
}
*/

//data abstraction using header file

/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int power;
	cin>>power;
	cout<<pow(n,power);	
}*/


#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int elem,pos;
	cin>>elem;
	cin>>pos;
	for(int i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=elem;
	for(int i=0;i<=n;i++)
		cout<<a[i]<<" ";
}

