#include<iostream>
using namespace std;

int factorial(int i)
{
	int prod=1;
	if(i==1)
		return 1;
	for(int j=2;j<=i;j++)
		prod=prod*j;
	return prod;
}
int main()
{
	int num,temp,sum=0,temp2;
	cout<<"Enter the number\n";
	cin>>num;
	temp2=num;
	while(num!=0)
	{
		temp=num%10;
		sum=sum+factorial(temp);
		num=num/10;
	}
	cout<<"The sum is : "<<sum<<endl;
	if(temp2==sum)
		cout<<"It is a strong number\n";
	else
		cout<<"It is not a strong number\n";
	return 0;
}
