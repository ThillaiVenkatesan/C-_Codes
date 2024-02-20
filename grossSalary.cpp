# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
	float basic,hra,da,gross;
	cout<<"enter the basic salary of an employee";
	cin>>basic;
	if(basic<25000)
	{
		hra=basic*20/100;
		da=basic*80/100;
	}
	else if (basic>=25000 & basic<40000)
	{
		hra=basic*25/100;
		da=basic*90/100;
	}
	else if(basic>=40000)
	{
		hra=basic*30/100;
		da=basic*95/100;
	}
	gross=basic+da+hra;
	cout<<setw(25)<<"basic pay"<<setw(10)<<basic<<endl;
	cout<<setw(25)<<"house rent allowance"<<setw(10)<<hra<<endl;
	cout<<setw(25)<<"dearness allowance"<<setw(10)<<da<<endl;
	cout<<setw(25)<<" "<<setw(10)<<"----------"<<endl;	
	cout<<setw(25)<<"gross salary"<<setw(10)<<gross<<endl;
	cout<<setw(25)<<" "<<setw(10)<<"----------"<<endl;
	return 0;
}
