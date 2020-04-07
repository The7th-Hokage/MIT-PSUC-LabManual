#include<iostream>
using namespace std;
int main()
{
	double n, temp, fine;
	cout<<"Enter the number of days that the person is late\n";
	cin>>n;
	if(n<=5)
		fine=n*0.5;
	else if(n>5 && n<=10)
	{
		temp=n-5;
		fine=temp*1 + 5*0.5;
	}
	else if(n>10 && n<=30)
	{
		temp=n-10;
		fine=temp*5 + 5*1  + 5*0.5;
	}
	else 
	{
		temp = n-30;
		fine=temp*10 + 20*5 + 5*1 + 5*0.5;
	}
	cout<<"Fine : "<<fine<<endl;
	return 0;
}
