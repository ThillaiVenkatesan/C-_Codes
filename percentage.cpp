# include <iostream>
using namespace std;
int main()
{
	float percent;
	int x;
	cout<<"enter your percentage";
	cin>>percent;
	cout<<"You Scored"<<percent<<"%"<<endl;
	x=percent/10;
	switch(x)
	{
		case 10:
		case 9:
		case 8:
			cout<<"you passed with distinction";
			break;
		case 7:
		case 6:
			cout<<"you have passed with first division";
			break;
		case 5:
			cout<<"you have passed with second division";
			break;
		case 4:
			cout<<"you have passed with third division";
			break;
		default :
			cout<<"sorry:you have failed";
			break;
	}
	return 0;
}
