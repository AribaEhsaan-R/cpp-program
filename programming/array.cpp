#include<iostream>
using namespace std;
int main()
{
    int a[3];

	int sum=0;
	cout<<"enter a value one";
	cin>>a[0];
	
	cout<<"enter a value two";
	cin>>a[1];
	
	cout<<"enter a value three";
	cin>>a[2];
	
	
	for(int i=0;i<4; sum+=a[i++]);
	{
		cout<<"the sum of all values is "<<sum ;
	}
	
}
