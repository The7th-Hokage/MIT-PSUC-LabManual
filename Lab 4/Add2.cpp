#include<iostream>
#include<math.h>
using namespace std;

double factorial(int i)
{
	double prod=1;
	if(i==1)
		return 1;

	for(int j=2;j<=i;j++)
		prod=prod*j;
	
	return prod;
}

int main()	
{
	double x,n,sum=0,diff=0,answer;
	int count=0;
	cout<<"Enter the x and n respectively\n";
	cin>>x>>n;
	cout<<"sin("<<x<<") = ";
	for(int i=1; ; i++)
	{
		if(i%2==1)
		{
			if(count%2==0)
				sum=sum+pow(x,i)/factorial(i);
			else
				diff=diff+pow(x,i)/factorial(i);
			count++;
			if(count==n)
				break;
		}
	}

	answer=sum-diff;
	cout<<answer<<endl;

	return 0;
}
