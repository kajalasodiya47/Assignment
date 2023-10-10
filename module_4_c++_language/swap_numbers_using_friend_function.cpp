#include<iostream>                // header file
using namespace std;
class operation{                  // create a class operation
	int n1,n2;
	public:
		void get(){
		   n1 = 12;
		   n2 = 14;
		   cout<<"Before swapping values are:"<<endl;
		   cout<<"number1 = "<<n1<<endl;
		   cout<<"number2 = "<<n2<<endl;
		}
		friend void swap_number(operation);         // create a friend function
};

void swap_number(operation t)
{
	t.n1 = t.n1 + t.n2;   
	t.n2 = t.n1 - t.n2;  
	t.n1 = t.n1 - t.n2;
	cout<<"After swapping values are:"<<endl;
	cout<<"number1 = "<<t.n1<<endl;
	cout<<"number2 = "<<t.n2;
}

int main()                 // main function with int return type
{
	operation obj;         // create a object
	obj.get();
	swap_number(obj);
	return 0;               // return 0 ends with the main function
}
