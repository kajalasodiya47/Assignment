#include<iostream>                          // header file
using namespace std;
class bank                                  // create a class bank
{                                     
	string depositor_name,type_of_acc;      // declare variables
	int acc_no,bal_amount,d_amnt,w_amnt;
	public:
	  void assign_values()         // assign_values() function for assign values to the data members
	  {
	  	cout<<"Enter Details:"<<endl;
	  	cout<<"----------------------------"<<endl;
	  	cout<<"Enter Name of the Depositor:";
	  	cin>>depositor_name;
	  	cout<<"Enter the Account Number:";
	  	cin>>acc_no;
	  	cout<<"Enter the type of Account:";
	  	cin>>type_of_acc;
	  	cout<<"Enter the Balance Amount in the Account:";
	  	cin>>bal_amount;
	  }
	  
	  void deposited_amount()           // deposited_amount() function to deposite the amount 
	  {
	  	cout<<"Enter Deposite Amount:";
	  	cin>>d_amnt;
	  	bal_amount += d_amnt;  
	  } 
	  
	  void withdraw_amount()            // withdraw_amount() function to withdraw a amount
	  {
	  	cout<<"Enter Withdraw Amount:";
	  	cin>>w_amnt;
	  	if(w_amnt>bal_amount)
	  	{
	  		cout<<"Cannot withdraw Amount"<<endl;
		}
		else{
			bal_amount-=w_amnt;
		}
	  }
	  
	  void display_details()           // display_details() function display depositer name and balance amount
	  {
	  	cout<<"----------------------------"<<endl;
	  	cout<<"Name:"<<depositor_name<<endl;
	  	cout<<"Balance:"<<bal_amount;
	  }
};
 
int main()                       // main function with int return type
{
	bank b;                      // create a objcet  
	b.assign_values();
	b.deposited_amount();
	b.withdraw_amount();
	b.display_details();
	return 0;                   // return 0 ends with the main function
}
