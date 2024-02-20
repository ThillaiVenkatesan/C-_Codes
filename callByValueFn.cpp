# include <iostream>
using namespace std;
void display(int x)
{
	int a=x*x;
	cout<<"\n\ninside fn"<<a;
 } 
int main()
{
	int a;
	cout<<"\nenter the value";
	cin>>a;
	display (a);
	cout<<"\n\nafter display"<<a;
}
