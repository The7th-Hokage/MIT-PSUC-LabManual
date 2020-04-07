#include<iostream>
#include<math.h>
using namespace std;
int main()
{	double n,p,r,si,ci;
	cout<<"Enter P, N and R respectively\n";
	cin>>p>>n>>r;
	si = (p*n*r)/100;
	ci = p*(pow((1+3/100),n))-p;
	cout<<"Simple interest :"<<si<<endl;
	cout<<"Compound interest :"<<ci<<endl;
	return 0;
}
