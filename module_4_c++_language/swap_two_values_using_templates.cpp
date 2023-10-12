#include<iostream>                    // header file 
using namespace std;
template<class A>                     // template 
A swap(A no1,A no2)
{
	no1 = no1 + no2;
	no2 = no1 - no2;
	no1 = no1 - no2;
	cout<<"After swapping values are: Number1= "<<no1<<" and Number2= "<<no2;
}

int main()                       // main function with int return type
{
	cout<<"Before swapping values are: number1= 3 and number2= 5"<<endl;
	swap(3,5);
	cout<<endl;
	cout<<"Before swapping values are: number1= 6.7 and number2= 5.8"<<endl;
	swap(6.7,5.8); 
	return 0;                   // return 0 ends with the main function
}      
