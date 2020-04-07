#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,sum=0,temp;
	cout<<"Enter the number\n";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		sum=pow((n%10),3)+sum;
		n=n/10;
	}
	cout<<"Sum of individual digits : " <<sum<<endl;
	if(sum==temp)
		cout<<"Hence it is an armstrong number\n";
	else
		cout<<"Hence it is not an armstrong number\n";
	return 0;
}
