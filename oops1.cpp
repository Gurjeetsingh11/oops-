//creating class,creating object,using public access specifiers,calling through objects

/*

#include<iostream>
using namespace std;
class Hero{
	public:
		int health;
		char level;		
};
int main()
{
	Hero ramesh;
	ramesh.health=50;
	ramesh.level='A';
	cout<<"health of ramesh :"<<ramesh.health;
	cout<<"level of ramesh :"<<ramesh.level;
}

*/

//using getter setter method to call private member outside the class

/*#include<iostream>
using namespace std;
class Hero{
	private:
		int health;
	public:
		char level;
	int gethealth()
	{
		return health;
	}		
	char getlevel()
	{
		return level;
	}
	int sethealth(int h)
	{
		health=h;
	}
	char setlevel(char ch)
	{
		level=ch;
	}
	
};
int main()
{
	Hero ramesh;
	ramesh.sethealth(50);
	ramesh.setlevel('A');
	cout<<"health of ramesh :"<<ramesh.gethealth();
	cout<<"level of ramesh :"<<ramesh.getlevel();
}*/


//main thoery for constructor how it is called and falana dhimka 

/*#include<iostream>
#include<string.h>
using namespace std;
class Hero{
	private:
		int health;
	public:
		char level;
		char* name;
	//default constructor
	Hero()				
	{
		cout<<"default constructor called "<<endl;
		name = new char[100];
	}
	//parameterised constructor
	Hero(int health)
	{
		//cout<<"this->"<<this<<endl;
		this->health=health;
	}
	Hero(int health,char level)
	{
		this->level=level;
		this->health=health;
	}
	//copyconstructor
	Hero(Hero& temp)
	{
		char *ch=new char(strlen(temp.name)+1);
		strcpy(ch,temp.name);						//deep copy
		this->name=ch;
		
		cout<<"copyconstructor called"<<endl;
		cout<<"health :"<<temp.health<<endl;
		cout<<"level :"<<temp.level<<endl;
	}
	void print()
	{
		cout<<"name :"<<this->name<<endl;
		cout<<"health :"<<this->health<<endl;
		cout<<"level :"<<this->level<<endl;
	}
	int gethealth()
	{
		return health;
	}		
	char getlevel()
	{
		return level;
	}
	int sethealth(int h)
	{
		health=h;
	}
	char setlevel(char ch)
	{
		level=ch;
	}
	void setname(char name[])
	{
		strcpy(this->name,name);
	}
	
};
int main()
{
	
	//shallow copy
	Hero hero1;
	hero1.sethealth(40);
	hero1.setlevel('C');
	char name[8]="gurjeet";
	hero1.setname(name);
	
	//hero1.print();
	
	//default copy constructor
	
	Hero hero2=hero1;
	//hero2.print();
	
	hero1.name[0]='S';
	hero1.print();
	
	hero2.print();
	hero1=hero2;			//copy assignment operator
	hero1.print();
	hero2.print();
	/*
	Hero S(70,'C');
	S.print();
	//copy constructor
	Hero R(S);
	R.print();
	
	*/
	/*//object created statically
	Hero ramesh(10,'A');
	cout<<"address of ramesh :"<<&ramesh<<endl;
	
	//object created dynammically
	Hero* a=new Hero();
	*/
	/*
	//static allocation
	Hero a;
	a.sethealth(70);
	a.setlevel('A');
	cout<<"health of a :"<<a.gethealth()<<endl;
	cout<<"level of a :"<<a.getlevel()<<endl;
	
	//dynamic allocation
	Hero* b=new Hero;
	b->sethealth(50);
	b->setlevel('B');
	cout<<"health of b :"<<b->gethealth()<<endl;		//(*b).gethealth()
	cout<<"level of b :"<<b->getlevel()<<endl;			//(*b).getlevel()
	*/
	/*ramesh.sethealth(50);
	ramesh.setlevel('A');
	cout<<"health of ramesh :"<<ramesh.gethealth();
	cout<<"level of ramesh :"<<ramesh.getlevel();
}

*/


//destructor
/*#include<iostream>
#include<string.h>
using namespace std;
class Hero{
	private:
		int health;
	public:
		char level;
		char* name;
	//default constructor
	Hero()				
	{
		cout<<"default constructor called "<<endl;
		name = new char[100];
	}
	//parameterised constructor
	Hero(int health)
	{
		//cout<<"this->"<<this<<endl;
		this->health=health;
	}
	Hero(int health,char level)
	{
		this->level=level;
		this->health=health;
	}
	//copyconstructor
	Hero(Hero& temp)
	{
		char *ch=new char(strlen(temp.name)+1);
		strcpy(ch,temp.name);						//deep copy
		this->name=ch;
		
		cout<<"copyconstructor called"<<endl;
		cout<<"health :"<<temp.health<<endl;
		cout<<"level :"<<temp.level<<endl;
	}
	void print()
	{
		cout<<"name :"<<this->name<<endl;
		cout<<"health :"<<this->health<<endl;
		cout<<"level :"<<this->level<<endl;
	}
	int gethealth()
	{
		return health;
	}		
	char getlevel()
	{
		return level;
	}
	int sethealth(int h)
	{
		health=h;
	}
	char setlevel(char ch)
	{
		level=ch;
	}
	void setname(char name[])
	{
		strcpy(this->name,name);
	}
	~Hero()
	{
		cout<<"this is destructor"<<endl;
	}
};
int main()
{
	//static allocation
	Hero a;
	
	//dynamic allocation
	Hero* b=new Hero();
	
	//manually destructor call
	delete b;
}*/


//initializing the const data member

/*#include<iostream>
using namespace std;
class si{
	int p;
	int t;
	const float r;
	public:
	si():r(2.5)
	{
		
	}	
	void read(int pr,int ti)
	{
		p=pr;
		t=ti;
	}
	float show()
	{
		return p*r*t/100;	
	}	
};
int main()
{
	si s;
	s.read(1000,10);
	cout<<"answer :"<<s.show();
}

*/	



//static member
#include<iostream>
#include<string.h>
using namespace std;
class Hero{
	private:
		int health;
	public:
		char level;
		char* name;
		static int timetocomplete;		//static data member
	//default constructor
	Hero()				
	{
		cout<<"default constructor called "<<endl;
		name = new char[100];
	}
	//parameterised constructor
	Hero(int health)
	{
		//cout<<"this->"<<this<<endl;
		this->health=health;
	}
	Hero(int health,char level)
	{
		this->level=level;
		this->health=health;
	}
	//copyconstructor
	Hero(Hero& temp)
	{
		char *ch=new char(strlen(temp.name)+1);
		strcpy(ch,temp.name);						//deep copy
		this->name=ch;
		
		cout<<"copyconstructor called"<<endl;
		cout<<"health :"<<temp.health<<endl;
		cout<<"level :"<<temp.level<<endl;
	}
	void print()
	{
		cout<<"name :"<<this->name<<endl;
		cout<<"health :"<<this->health<<endl;
		cout<<"level :"<<this->level<<endl;
	}
	int gethealth()
	{
		return health;
	}		
	char getlevel()
	{
		return level;
	}
	int sethealth(int h)
	{
		health=h;
	}
	char setlevel(char ch)
	{
		level=ch;
	}
	void setname(char name[])
	{
		strcpy(this->name,name);
	}
	//static member function
	static int random()
	{
		return timetocomplete;
	}
	~Hero()
	{
		cout<<"this is destructor"<<endl;
	}

};
int Hero::timetocomplete=8; //access static member
int main()
{
	
	cout<<Hero::timetocomplete<<endl; 
	
	cout<<Hero::random()<<endl;
	
	
	/*
	//static allocation
	Hero a;
	
	//dynamic allocation
	Hero* b=new Hero();
	
	//manually destructor call
	delete b;
	*/
}

