#include<iostream>
using namespace std;
class cricketer{
	
};
class batsman:public cricketer{
	int total_runs,avg_runs;
	void get_data()
	{
		cout<<"Enter total runs:";
		cin>>total_runs;
		
	}
	
};
int main()
{
	return 0;
}
