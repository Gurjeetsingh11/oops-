//access modeifer public private protected


/*

#include<iostream>
using namespace std;
class human{
	private:
		int height;
	public:		
		int weight;
	private:
		int age;
	int getage()
	{
		return this->age;
	}
	void setweight(int w)
	{
		this->weight=w;
	}
};

class male:public human{
	
	public:
		string color;
	int sleep()
	{
		cout<<"male sleeping";
	}
	int getheight()
	{
		return this->height;
	}
};
int main()
{
	male m1;
	cout<<m1.height;
	
	
	
	/*male obj1;
	cout<<obj1.age<<endl;
	cout<<obj1.height<<endl;
	cout<<obj1.weight<<endl;
	
	cout<<obj1.color<<endl;
	obj1.setweight(85);
	cout<<obj1.weight<<endl;
	cout<<obj1.sleep()<<endl;
	
}*/


//single inheritance

/*#include<iostream>
using namespace std;
class animal{
	public:
		int age;
		int weight;
	void speak()
	{
		cout<<"barking"<<endl;
	}
};
class dog : public animal{
	
};
int main()
{
	dog d;
	d.speak();
	cout<<d.age;
}*/


//multilevel inheritance
/*#include<iostream>
using namespace std;
class animal{
	public:
		int age;
		int weight;
	void speak()
	{
		cout<<"barking"<<endl;
	}
};
class dog : public animal{
	
};

class bulldog : public dog{
	
};
int main()
{
	bulldog b;
	b.speak();
}*/



//multiple inhertiance

/*#include<iostream>
using namespace std;
class animal{
	public:
		int age;
		int weight;
	void bark()
	{
		cout<<"barking"<<endl;
	}
};
class human{
	public:
		string color;
	void speak()
	{
		cout<<"speaking"<<endl;
	}	
};
//multiple inheritance :::::

class multiple : public animal,public human{
	
};
int main()
{
	multiple m;
	m.speak();
	m.bark();
	
}*/

//hyrarchical inheritance

/*#include<iostream>
using namespace std;
class A{
	public:
	void func1()
	{
		cout<<"this is inside function 1"<<endl;
	}
};
class B: public A{
	public:
	void func2()
	{
		cout<<"this is inside function 2"<<endl;
	}
};
class C:public A{
	public:
	void func3()
	{
		cout<<"this is inside function 3"<<endl;
	}
};
int main()
{
	A obj1;
	obj1.func1();
	cout<<endl;
	
	B obj2;
	obj2.func1();
	obj2.func2();
	cout<<endl;
	
	C obj3;
	obj3.func1();
	obj3.func3();
}
*/

//hybrid inheritance

/*#include<iostream>
using namespace std;
class A{
	public:
	void funcA()
	{
		cout<<"inside A"<<endl;
	}
};
class B : public A
{
	public:
	void funcB()
	{
		cout<<"inside B"<<endl;
	}	
};
class D{
	public:
	void funcd()
	{
		cout<<"inside D"<<endl;
	}
};


class C : public A, public D
{
	public:
	void funcC()
	{
		cout<<"inside C"<<endl;
	}
};
int main()
{
	C objc;
	objc.funcA();
	objc.funcC();
	objc.funcd();
	cout<<endl;
	B objb;
	objb.funcA();
	objb.funcB();
}*/


//ambiguity in inheritance

/*#include<iostream>
using namespace std;
class A{
	public:
	void func()
	{
		cout<<"this is A function"<<endl;
	}
};
class B{
	public:
	void func()
	{
		cout<<"this is B function "<<endl;
	}
};
class C : public A,public B{
};
int main()
{
	C obj;
	//obj.func();						//abiguity will arise
	
	obj.A::func();
	obj.B::func();
}
	*/

