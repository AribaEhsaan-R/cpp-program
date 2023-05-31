#include<iostream>
using namespace std;
int main()
{
	int choice,permanenthor,wdgehour;
	char want;
	do
	{
		cout<<"which type of employee you are?\n1.permanent\n2.daily wages\n";
		cin>>choice;switch(choice)
		{
			case1:
				{
					cout<<"enter your daily homework="; cin>>permanenthor;
					cout<<"your medical allowance is5%"<<endl;
					cout<<"your total salary is "<<5/100*permanenthor*800+30*permanenthor*800;
					break;
					
				}
				{
				case 2:
					cout<<"enter your daily working hour=";
					cin>>wdgehour;
					cout<<"your medical allowance is 3%"<<endl;
					cout<<"your total salary is"<<3/100*wdgehour*400+30*wdgehour*400;
					break;
					
		}
	}
	cout<<"\ndo you want to continous?\n";
	cin>>want;
}
while(want!='n');
return 0;
}
