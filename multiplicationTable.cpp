# include <iostream>
using namespace std;
int main()
{
	int a,i,n;
	cout<<"enter the loop value";
	cin>>n;
	for(i=1;i<=10;i++)
	{
    	a=i*n;
		cout<<i<<"*"<<n<<"="<<a<<endl;
	}
}
