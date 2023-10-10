// Multilevel inheritance
#include<iostream>                   // header file
using namespace std;
class students                      // create a class students
{
	protected:                     // access specifier
	int roll_num;
	public:
	void get_rollno(){
		cout<<"Enter the roll number:";
		cin>>roll_num;
		cout<<"Student roll number:"<<roll_num<<endl;
	}
};

class test:public students{          
    protected:             // access specifier
	int m,e;
	public:
	void get_marks(){
     	cout<<"Enter maths and english subject marks:";
	    cin>>m>>e;
	    cout<<"Marks of two subjects Maths and English of student Roll number "<<roll_num<<" is:"<<endl;
	    cout<<"Maths:"<<m<<endl;
	    cout<<"English:"<<e<<endl;
    }
};

class result:public test{
     int total_marks;
     public:
     void get_totalmarks(){
     	total_marks = m + e;
     	cout<<"Total marks of student Roll number "<<roll_num<<" is:"<<total_marks;
	 }
};

int main()            // main function with int return type
{
	result obj;       // create a object
	obj.get_rollno();
	obj.get_marks();
	obj.get_totalmarks();
	return 0;         // return 0 ends with the main function
}
