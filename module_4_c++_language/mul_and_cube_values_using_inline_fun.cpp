#include<iostream>               // header file
using namespace std;
inline int mul(int a)         // inline multiplication function
{
	return a * a;
}

inline int cube(int a)      // inline cubic function
{
	return a * a * a;
}

int main()                  // main function with int return type
{                      
	int num1,num2;          // declare variables
	cout<<"Enter the value to find the multiplication values:";
	cin>>num1;
	cout<<"Multiplication values of "<<num1<<" is:"<<mul(num1)<<endl;
	cout<<"Enter the value to find the cubic values:";
	cin>>num2;
	cout<<"Cubic values of "<<num2<<" is:"<<cube(num2)<<endl;
	return 0;               // return 0 ends with the main function
}

