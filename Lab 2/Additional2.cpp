#include<iostream>
using namespace std;
int main()
{
	int twenty, ten, five, fifty;
	double temp;
	cout<<"Enter the number of 20, 10, 5 rupee coins and 50 paisa coins respectively\n";
	cin>>twenty>>ten>>five>>fifty;
	temp=20*twenty+10*ten+5*five+fifty*0.5;
	cout<<"Rs."<<temp<<endl;
	return 0;
}
