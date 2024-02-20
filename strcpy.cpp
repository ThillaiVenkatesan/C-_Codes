# include <string.h>
# include <iostream>
using namespace std;
int main()
{
	char source[]= "thillai";
	char target[10]="hello";
	cout<<source;
	cout<<"\n"<<target;
	strcpy(target,source);
	cout<<"\nafter copy"<<target;
}
