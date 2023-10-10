#include<iostream>                      // header file
using namespace std;
class operation{                        // create a class operation
	int length,width,radius;            // declare int variables
	double height,base,res;             // declare double variables
	public:
	void result(int l,int w)
	{
		length = l;
		width = w;
		res = length * width;
		cout<<"Area of Rectangle is:"<<res<<endl;
	}
	
	void result(double h,double b)
	{
		height = h;
		base = b;
		res = 0.5 * height * base;
		cout<<"Area of Triangle is:"<<res<<endl;
	}
	
	void result(int r)
	{
		radius = r;
		res = 3.14 * r * r;
		cout<<"Area of circle is:"<<res;
	}
};

int main()                        // main function with int return type
{
   operation obj;                 // create a obect 
   obj.result(3,9);
   obj.result(10.00,3.00);
   obj.result(5);
   return 0;	                  // return 0 ends with the main function
} 
