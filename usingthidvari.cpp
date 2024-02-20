# include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the values of a&b"<<endl;
	cin>>a>>b;
	cout<<"\nthe values of a and b"<<endl<<a<<endl<<b;
	c=a;
	a=b;
	b=c;
	cout<<"\nvalues of a and b after interchanging"<<endl<<a<<endl<<b;
}
