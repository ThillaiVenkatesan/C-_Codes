# include <iostream>
using namespace std;
int main()
{
	int i,n,s=0;
	cout<<"enter the loop value";
	cin>>n;
	for(i=2;i<=n;i+=2)
	s=s+i;
	cout<<"the sum of even nos. are "<<s;
}
