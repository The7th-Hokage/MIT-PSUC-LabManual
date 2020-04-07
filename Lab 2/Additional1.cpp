#include<iostream>
using namespace std;
int main()
{
	double inputsec, seconds, minutes, hours, temp, temp1;
	cout<<"Enter the value in seconds\n";
	cin>>inputsec;
		temp=inputsec/3600;
		hours=int(temp);
		temp=hours*3600;
		temp1=inputsec-temp;
		temp=temp1/60;
		minutes=int(temp);
		temp=minutes*60;
		seconds=temp1-temp;
	cout<<"Hours : "<<hours<<'\n'<<"Minutes : "<<minutes<<'\n'<<"Seconds : "<<seconds<<endl;
	return 0;
}
