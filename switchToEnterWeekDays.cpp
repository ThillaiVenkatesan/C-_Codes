# include <iostream>
using namespace std;
int main()
{
    int d;
	cout<<"enter a no.";
	cin>>d;
	switch(d)
	{
		case 1:
			cout<<"sunday";
			break;
		case 2:
			cout<<"monday";
			break;
		case 3:
			cout<<"tuesday";
			break;
		case 4:
			cout<<"wednesday";
			break;
		case 5:
			cout<<"thursday";
			break;
		case 6:
			cout<<"friday";
			break;
		case 7:
			cout<<"saturday";
			break;
		default:
			cout<<"invalid choice";	
	}
}
