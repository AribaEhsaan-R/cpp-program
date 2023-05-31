#include<iostream>
using namespace std;
int main()
{
	int num1,num2,ans;
	char cha,opera ;
	do
	{
		cout<<"enter a num 1,operator, num2=";
		cin>>num1>>opera>>num2;
		switch(opera)
		{
			case'+': ans= num1+num2;
			break;
			case'-':ans=num1-num2;
			break;
			case'*':ans=num1*num2;
			break;
			case'/':ans=num1/num2;
			break;
		}
		cout<<"answer is="<<ans;
		cout<<"\nDO another=";
		cin>>cha;
	}
	while(cha!='n');
}
