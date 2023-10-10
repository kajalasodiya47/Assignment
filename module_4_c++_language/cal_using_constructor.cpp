#include<iostream>            // header file
using namespace std;
class result{                 // create a class result
	float res;
	public:
	result(int a,int b)      // constructor with two int type
	{
	   res = a + b;
	   cout<<"Addition is:"<<res<<endl;
	}
	
	result(int a, double b)    // constructor with two int and double type
	{
		res = a - b;
		cout<<"Subtraction is:"<<res<<endl;
	}
	
	result(double a,double b)   // constructor with two double type
	{
		res = a * b;
		cout<<"Multiplication is:"<<res<<endl;
	}
	
	result(int a)          // constructor with one int type
	{
		int b = 4;
		res = a / b;
		cout<<"Division is:"<<res;
	}
};

int main()                // main function with int return type
{
	result obj(2,3);      // create a object
	result obj1(10,2.00);
	result obj2(10.00,3.00);
	result obj3(20);
	return 0;             // return 0 ends with the main function
}

