#include<iostream>            // header file
using namespace std; 
class calculator              // create a class calculator
{
	int num1,num2;            // declare variables
	float result;
	public:
	char choice;
		calculator()       // constructor
        {
	        cout<<"Enter + for addition"<<endl<<"Enter - for subtraction"<<endl<<"Enter * for multiplication"<<endl<<"Enter / for division"<<endl<<"Enter % for modulo"<<endl;
        }
        
		void get_choice()
		{
			cout<<"Please enter your choice:";
			cin>>choice;
		}
		
		void get_number()
		{                                                                                           
			cout<<"Enter two numbers:";
			cin>>num1>>num2;
		}
		
		void sum()
		{
			result = num1 + num2;
			cout<<"Addition is:"<<result;
		}
		
		void sub()
		{
			result = num1 - num2;
			cout<<"Subtraction is:"<<result;
		}
		
		void mul()
		{
			result = num1 * num2;
			cout<<"Multiplication is:"<<result;
		}
		
		void div()
		{
			result = num1 / num2;
			cout<<"Division is:"<<result;
		}
		
		void mod()
		{
			result = num1 % num2;
			cout<<"Modulo is:"<<result;
		}
};

int main()                 // main function with int return type
{
	calculator obj;        // create a objcet    
	obj.get_choice();
	switch(obj.choice)
	{
		case '+':
			obj.get_number();
			obj.sum();
		break;	
		case '-':
			obj.get_number();
			obj.sub();
		break;
		case '*':
			obj.get_number();
			obj.mul();
		break;
		case '/':
			obj.get_number();
			obj.div();
		break;
		case '%':
			obj.get_number();
			obj.mod();
		break;
		default:
			cout<<"Please enter your valid choice!!";
	}
	return 0;                     // return 0 ends with the main function
}
