#include<iostream>
using namespace std;
int main()
{
	char want;
	do
	{
		int fact=1,number;
		cout<<"enter a number:";
		cin>>number;
		for(int i=1;i<=number;i++)
		{
			fact=fact*i;
		}
		cout<<"\n\t"<<"\ndo you want to continue?\n";
		cin>>want;
	}
	while(want!='n');
	return 0;
}
