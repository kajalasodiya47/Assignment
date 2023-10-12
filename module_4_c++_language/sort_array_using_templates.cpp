#include<iostream>                    // header file 
using namespace std;
template<class A>                     // template
A sort(A arr[])
{
	for(int i=0;i<4;i++)
    {
	    for(int j=i+1;j<4;j++)
		{
		    if(arr[i]>arr[j])
			{
			    A temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"After assending order array is: ";
	for(int i=0;i< 4;i++)
	{
	    cout<<arr[i]<<"\t";
    }
}
int main()                      // main function with int return type
{
	cout<<"Integer array elements:"<<endl;
    int int_arr[4] = {9,7,6,4};
	cout<<"Before assending order array is: ";
	for(int i=0;i< 4;i++)
	{
	   cout<<int_arr[i]<<"\t";
    }
    cout<<endl;
    sort(int_arr);
    cout<<endl;
    cout<<"Floating array elements:"<<endl;
    double float_arr[4] = {8.2,1.2,7.2,2.3};
    cout<<"Before assending order array is: ";
	for(int i=0;i< 4;i++)
	{
	   cout<<float_arr[i]<<"\t";
    }
    cout<<endl;
    sort(float_arr);
	return 0;                   // return 0 ends with the main function
}
