// Multiple inheritance     
#include<iostream>            // header file
using namespace std;
class person{                // create a class person
	string name;             // declare variables
	int age;
	public:
	void get_data(){
      	cout<<"Enter the name and age:";
	    cin>>name>>age;
	    cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
      }
};

class student{               // create another class student
	float percentage;
	public:
	void get_per()
	{
		cout<<"Enter percentage:";
		cin>>percentage;
		cout<<"Percentage:"<<percentage<<endl;
	}
};

class teacher:public student,public person{
	float salary;
	public:
	void get_salary()
	{
	   cout<<"Enter salary:";
	   cin>>salary;
	   cout<<"Salary:"<<salary;
	}
};

int main()                    // main function with int return type
{
	teacher obj;              // create a object
	obj.get_data();
	obj.get_per();
	obj.get_salary();
	return 0;                 // return 0 ends with the main function
}
