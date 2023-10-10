#include<iostream>                        // header file
using namespace std; 
class operation{                          // create a class operation
	int n1,n2;                            // declare variables
	public:
		void get(){
		   cout<<"Enter two numbers:";
		   cin>>n1>>n2;
		}
		friend void max_number(operation);        // create friend function
};

void max_number(operation t)
{
	if(t.n1 > t.n2)
	{
		cout<<"Number "<<t.n1<< " is max number";
	}
	else
	{
		cout<<"Number "<<t.n2<< " is max number";
	}
}

int main()                              // main function with int return type
{ 
	operation obj;                      // create a object
	obj.get();
	max_number(obj);
	return 0;                           // return 0 ends with the main function
}
