#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int*temp=new int[size];
    cout<<"enter the temperature of each day of month:\n";
    for(int i=0;i<size;i++)
    {
    	cout<<"day"<<i+1<<":";
    		cin>>*(temp+ i);
	}
	int lowest=*temp;
	int highest=*temp;
	double sum=*temp;
	for(int i=1;i<size;i++)
	{
		if(*(temp+i)<lowest){
			lowest=*(temp+i);
		}if(*(temp+i)>highest)
		{
			highest=*(temp+i);
		}
		sum+=*(temp+i);
	}
	double average=sum /size;
	
	cout<<"Lowest temperature:"<<lowest<<endl;
	cout<<"Highest temperature:"<<highest<<endl;
	cout<<"Average temperature:"<<average<<endl;
	delete[]temp;
	return 0;
}
//Coded by "ARIBA EHSAAN"

