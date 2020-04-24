#include<iostream>
using namespace std;
int GCD(int a, int b, int i,int prod)
{
	while(i<a && i<b)
	{
		if(a%i==0 && b%i==0)
			return (i * GCD(a/i,b/i,i,prod));
		else
			i++;
	}
	return i;
}

int main()
{
	int a,b,i=2,prod=1;
	cout<<"Enter the two numbers\n";
	cin>>a>>b;
	if((a%2==0 && b%2==0) || (a%3==0 && b%3==0))
		cout<<"GCD : "<<GCD(a,b,i,prod)<<endl;
	else
		cout<<"GCD : 1"<<endl;
	return 0;
}
