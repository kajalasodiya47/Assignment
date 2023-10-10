#include<iostream>              // header file
using namespace std;
class operation{              // create a class operation
	int num1,num2,res;        // declare variables
	public:
	void result()            // create a function result with zero arguments
	{
		cout<<"Enter two numbers for Addition:";
		cin>>num1>>num2;
		res = num1 + num2;
		cout<<"Addition of "<<num1<<" and "<<num2<<" is:"<<res<<endl;
	}
	
	void result(int n1,int n2)        // create a function result with two int type
	{
		num1 = n1;
		num2 = n2;
		res = num1 - num2;
		cout<<"Subtraction of "<<num1<<" and "<<num2<<" is:"<<res<<endl;
	}
	
	void result(int n1,double n2)      // create a function result with two int and double type
	{
	    num1 = n1;
		num2 = n2;
		res = num1 * num2;
		cout<<"Multilpication of "<<num1<<" and "<<num2<<" is:"<<res<<endl;
	}
	
	void result(double n1,double n2)     // create a function result with two double type
	{
		 num1 = n1;
		num2 = n2;
		res = num1 / num2;
		cout<<"Division of "<<num1<<" and "<<num2<<" is:"<<res;
	}
};

int main()                // main function with int return type
{
	operation obj;        // create a object
	obj.result();
	obj.result(10,3);
	obj.result(4,2.00);
	obj.result(8.00,4.00);
	return 0;             // return 0 ends with the main function
}
