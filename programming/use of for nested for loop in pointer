#include<iostream>
using namespace std;
int main()
{
   double radius[10],area[10];
   double*Radius=radius;
   double*Area=area;
   cout<<"enter 10 radius values\n";
   for(int i=0;i<10;i++)
   {
   	cin>>*(Radius+i);
   }
   for(int i=0;i<10;i++)
   {
   	*(Area+i)=*(Radius+i)**(Radius+i)*3.14159;
   }
   cout<<"areas of circle\n";
   for(int i=0;i<10;i++)
   {
   	cout<<*(Area+i)<<endl;
   }
}
//Coded by "ARIBA EHSAAN"

