#include<iostream>
using namespace std;
int main()
{
	int num,temp=0;
	cout<<"Enter the number\n";
	cin>>num;
	for(int i=1; i<=num/2; i++)
	{
		if(num%i==0)
			temp=temp+i;
	}
		cout<<"The sum of positive divisors : "<<temp<<endl;
		if(temp==num)
			cout<<"It is a perfect number\n";
		else
			cout<<"It is not a perfect number\n";
	return 0;
}
