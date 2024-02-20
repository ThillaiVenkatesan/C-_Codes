# include <iostream>
using namespace std;
int main()
{
	float a,b,c,g,h;
	cout<<"enter your salary";
	cin>>g;
	if(g>10000&g<=25000)
	{
	cout<<"you have got 10% bonus";
	h=0.1*g;
	a=h+g;
	cout<<"\nGrandTotal="<<a;}
	else if(g>25000&g<=40000)
	{
	cout<<"you have got 20% bonus";
	h=0.2*g;
	b=h+g;
	cout<<"\nGrandTotal="<<b;}
	else if(g>40000&g<=100000)
	{
	cout<<"you have got 30% bonus";
	h=0.3*g;
	c=h+g;
	cout<<"\nGrandTotal="<<c;}
	else if(g>100000)
	cout<<"this version doesn't supports large value";
	else
	cout<<"different bonus level available";
}

