#include<iostream>
using namespace std;
//class: blue print for creating object.or defined datatypes


// what is access specifer??
// Access specifiers define how the members (attributes and methods) of a class can be accessed

//In C++, there are three access specifiers:
//
//public - members are accessible from outside the class
//private - members cannot be accessed (or viewed) from outside the class
//protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
//


//syntax
//class student{
//	public:
//	int age;
//	string name;
//	int roll_no;
//
//	
//};

//syntax
class student{
	private:
	int age;
	string name;
	int roll_no;
	//function in object
	public:
	void setname(string s)
	{
		name=s;
		cout<<name<<endl;
	}
void setage(int a)
	{
		age=a;
		cout<<age<<endl;
	}
void setroll_no(int r)
	{
		roll_no=r;
		cout<<roll_no<<endl;
	}

	
};

//for accessing object in main
int main(){
	student s1;
	
//	method1 for assigning name
//cin>>s1.age>>s1.name>>s1.roll_no;
//cout<<s1.age<<s1.name<<s1.roll_no <<endl;

//method 2 for assigning variable

//s1.age=12;
//s1.name="slk";
//s1.roll_no=520;
//cout<<s1.age<<s1.name<<s1.roll_no;

// if the acess specifer is private then we assing data to variable by this method

	s1.setname("suraj");
	s1.setage(25);
	s1.setroll_no(258963);



}

/*  what is constructor

ans :-constructor are special function that automatically invoked at the time of object 
creation

. it has no return type 
.it name should be same as class name
.it is used to initalise value


syntax

#include<iostream>
using namespace std;

class student{
int rool;
string name;
public:
student ( int b,string a;)
{
rool=b;
name=a;


}
};
 int main()
{
student a1(12,"suraj")
a1.display() //used to display all input
}


*/




/* destructor 

destructor is used to clear the allocated memory to constructor
~ this symbol is used
~class name(){
}

*/