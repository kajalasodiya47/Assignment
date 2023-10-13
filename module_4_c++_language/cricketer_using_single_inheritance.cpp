// Single inheritance
#include<iostream>                 // header file
using namespace std;
class cricketer{                   // create a class cricketer
	protected:
		string name;
};

class batsman:public cricketer{
	int innings,notout,total_runs,avg_runs,bestperformance;
	public:
	void get_data()
	{
		cout<<"Enter Batsman name:";
		cin>>name;
		cout<<"Enter innings,notout and total runs:";
		cin>>innings>>notout>>total_runs;
		avg_runs=total_runs/(innings-notout);
		cout<<"Enter best score:";
		cin>>bestperformance;
	}
	
	void display_data()
	{
		cout<<"Batsman name: "<<name<<endl;
		cout<<"Total Runs: "<<total_runs<<endl;
		cout<<"Average Runs: "<<avg_runs<<endl;
		cout<<"Bestperformance: "<<bestperformance;
	}
};
int main()                    // main function with int return type
{
	batsman obj;              // create a object
	obj.get_data();
	cout<<endl;
	obj.display_data();
	return 0;                 // return 0 ends with the main function
}
