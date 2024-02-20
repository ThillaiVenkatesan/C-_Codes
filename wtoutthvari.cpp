# include <iostream>
using namespace std;
int main()
{
	int sum,a,b;
	cout<<"enter the values of a&b"<<endl;
	cin>>a>>b;
	cout<<"\nthe values of a and b"<<endl<<a<<endl<<b;
	a=a+b;
	b=a-b;
	a=a-b;
    cout<<"\ninterchanged values"<<endl<<a<<endl<<b;
}
