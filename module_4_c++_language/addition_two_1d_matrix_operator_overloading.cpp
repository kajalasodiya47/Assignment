#include<iostream>                     // header file
using namespace std;
class employee{                        // create a class employee
	int a[2],res[2];                   // declare array variables
	public:
		void get()
		{
		    int i;
			for(i=1;i<=2;i++)
			{
				cin>>a[i];
			}
		}
		
		void display()
		{
			int i;
			for(i=1;i<=2;i++)
			{	
				cout<<a[i];
				cout<<"\t";
			}
		}
		
		void operator +(employee add)
		{
			int i;
			for(i=1;i<=2;i++)
			{
				res[i] = a[i]+add.a[i];
	     	}
		    
			for(i=1;i<=2;i++)
			{
			   cout<<res[i];
			   cout<<"\t";	
			}
		}
};

int main()                       // main function with int return type
{ 
	employee e1;                 // create employee e1 object
	employee e2;                 // create another employee e2 object
	cout<<"Enter 1D first matrix two values:";
	e1.get();
    cout<<"Enter 1D second matrix two values:";
	e2.get();
	cout<<"values of first matrix:"<<endl;
	e1.display();
	cout<<"\nvalues of second matrix:"<<endl;
	e2.display();
	cout<<endl;
	cout<<"Addition of two 1D matrix:"<<endl;
	e1+e2; 
	return 0;                   // return 0 ends with the main function
}
