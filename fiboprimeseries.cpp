# include <iostream>
# include <stdlib.h>
using namespace std;
void primechk(int a)
{
	int j;
	if(a==0||a==1)
	cout<<"\tNEITHER PRIME NOR COMPOSITE";
	else
	{
		for(j=2;j<a;j++)
		{
			if(a%j==0)
			{
				cout<<"\tCOMPOSITE";
				break;
			}
		}
		if(a==j)
		cout<<"\tPRIME";
	}
}
     void fibo(int n)
    
	{int a=-1,b=1,c=0;
	for(int i=1;i<n;i++)
	{
		cout<<endl;
		c=a+b;
		cout<<c;
		primechk(c);
		a=b;
		b=c;
	}
}
int main()
{
	int n;
	cout<<"Enter the number of Fibo Series";
	cin>>n;
	cout<<"\n\t the fibonacci series are";
	fibo(n);
	return 0;
}

