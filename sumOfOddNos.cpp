# include <iostream>
using namespace std;
int main()
{
	int i,n,s=0;
	cout<<"enter the loop value";
	cin>>n;
	for(i=1;i<=n;i+=2)
	s=s+i;
	cout<<"the sum of odd nos. are "<<s;
}
