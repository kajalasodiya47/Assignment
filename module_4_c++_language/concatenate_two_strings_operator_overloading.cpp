#include<iostream>                     // header file
using namespace std;
class concate_string{                  // create a class
	string name;                       // declare string variable
	public:
	void get()
    {
	    cin>>name;
	}
	
	void display()
	{
	    cout<<name;
	}
	
	void operator +(concate_string add)	
    {
       	  concate_string res;
       	  res.name=name+" "+add.name;
       	  cout<<res.name;
	}	  
};
int main()                       // main function with int return type
{	
	concate_string obj1;         // create object obj1
	concate_string obj2;         // create another object obj2
	cout<<"Enter the first string:";
	obj1.get();
	cout<<"Enter the second string:";
	obj2.get();
	cout<<endl;
	cout<<"First string is: ";
	obj1.display();
	cout<<endl;
	cout<<"Second string is: ";
	obj2.display();
	cout<<endl<<endl;
	cout<<"Concatenate of two strings is: ";
	obj1+obj2;
	return 0;                    // return 0 ends with the main function
}
