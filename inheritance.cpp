//inheritance  : the process in which the new class inherit the properrties of pevious class 

//types of inheritance

//1. single inheritance :such inheritance in which the child  class derived its propeties fom a single parent class.



//#include<iostream>
//using namespace std;
//
//class human{
//	protected:
//	string  gender;
//	int age;
//	
//	
//};
//class  student :public human{
//	protected:
//	string name;
//	int roll_no;
//	
//	public:
//		 student(string gender,int age,string name,int roll_no)
//		{
//			this->gender =gender;
//			this->age =age;
//			this->name =name;
//			this->roll_no =roll_no;
//			
//		}
//		
//		void dispaly(){
//			cout<<gender<<" "<<age<<" "<<name<<" "<<roll_no<<endl;
//		}
//		
//};
//
//
//int main(){
//	student a1("male",12,"suraj",123);
//	a1.dispaly();
//	student a2("female",14,"fk",145);
//	a2.dispaly();
//}



//2. multiple inheritance:such type of inheritance in which the child class borrowed properties from more than one parents class.





//#include<iostream>
//using namespace std;
//
//class human{
//	protected:
//	string  gender;
//	int age;
//	
//	
//};
//class parent{
//	protected:
//		string fname;
//		
//};
//class  student :public human , parent{
//	protected:
//	string name;
//	int roll_no;
//	
//	public:
//		 student(string gender,int age,string fname,string name,int roll_no)
//		{
//			this->gender =gender;
//			this->age =age;
//			this->fname=fname;
//			this->name =name;
//			this->roll_no =roll_no;
//			
//		}
//		
//		void dispaly(){
//			cout<<gender<<" "<<age<<" "<<fname<<" "<<name<<" "<<roll_no<<endl;
//		}
//		
//};
//
//
//int main(){
//	student a1("male",12,"lbverma","suraj",123);
//	a1.dispaly();
//	student a2("female",14,"skderi","fhJ",1235);
//	a2.dispaly();
//	
//}




//multilevel inheritance : In this type of inheritance, a derived class is created from another derived class and that derived class can be derived from a base class or any other derived class. There can be any number of levels.



//#include<iostream>
//using namespace std;
//
//class human{
//	protected:
//	string  gender;
//	int age;
//	
//	
//};
//class parent{
//	protected:
//		string fname;
//		
//};
//
//class gaurdian:public parent{
//	
//	protected:
//		string gdn;
//};
//class  student :public human,gaurdian{
//	protected:
//	string name;
//	int roll_no;
//	
//	public:
//		 student(string gender,int age,string fname,string gdn,string name,int roll_no)
//		{
//			this->gender =gender;
//			this->age =age;
//			this->fname=fname;
//			this->gdn= gdn;
//			this->name =name;
//			this->roll_no =roll_no;
//			
//		}
//		
//		void dispaly(){
//			cout<<gender<<" "<<age<<" "<<fname<<" "<<gdn<<" "<<name<<" "<<roll_no<<endl;
//		}
//		
//};
//
//
//int main(){
//	student a1("male",12,"lbverma","mother","suraj",123);
//	a1.dispaly();
//	student a2("female",14,"skderi","mother","fhJ",1235);
//	a2.dispaly();
//	
//}
//


//4. hirerchal inheritance:such type of inheritance in which the more than one child class borrowed its properties from a single parent class. 

//#include<iostream>
//using namespace std;
//
//
//class human{
//	protected:
//	string gender;
//	
//};
//
//class student:public human{
//	protected:
//		string name;
//		int roll_no;
//		
//		public:
//		student(string gender,string name,int roll_no){
//			this->gender=gender;
//			this->name=name;
//			this->roll_no=roll_no;
//			
//			
//		}
//		void display(){
//			cout<<gender<<" "<<name<<" "<<roll_no<<endl;
//		}
//};
//
//
//class employ :public human{
//	protected:
//	string name;
//	int salary;
//	string post;
//	
//	
//	public:
//	employ(string gender,string name,string post,int salary){
//		this->gender=gender;
//		this->name=name;
//		this->post=post;
//		this->salary=salary;
//		
//		
//	}	
//		void display(){
//			cout<<gender<<" "<<name<<" " <<post<<" "<<salary<<endl;
//		}
//
//};
//
//int main(){
//	//instance of object is created only once.
//	student a1("male","suraj",12);
//	a1.display();
//	employ a2("male","suraj","hr",66);
//	a2.display()
//;}







//hybrid inheritance: combination of two or more inheritance


#include<iostream>
using namespace std;

class human{
	protected:
	string  gender;
	int age;
	
	
};
class parent{
public:
		string fname;
		
};


class  student :public human , parent{
public:
	string name;
	int roll_no;
	

		
		
		
};
class markks:public student{
	int marks;
		public:
		 markks(string gender,int age,string fname,string name,int roll_no,int marks)
		{
			this->gender =gender;
			this->age =age;
			this->fname=fname;
			this->name =name;
			this->roll_no =roll_no;
			this->marks=marks;
			
		}
		
		void dispaly(){
			cout<<gender<<" "<<age<<" "<<fname<<" "<<name<<" "<<roll_no<<""<<marks<<endl;
		}
};


int main(){
	student a1("male",12,"lbverma","suraj",123,256);
	a1.dispaly();
markks a2("female",14,"skderi","fhJ",1235,1456);
	a2.dispaly();
	
}



// "https://app.eraser.io/workspace/oXSlng1vHbb3v0iwc17k?origin=share"