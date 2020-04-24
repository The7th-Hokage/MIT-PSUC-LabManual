#include<iostream>
using namespace std;

int IsPrime(int n)
{
	int check1=0;
	for(int i=2;i<=n/2;i++)
		if(n%i==0)
			check1++;
	if(check1==0)
		return 1;
	else 
		return 0;
}

int main()
{
	int n,check=0,temp,i=2;
	cout<<"Enter N\n";
	cin>>n;
	if(n<1)
		cout<<"Enter a valid number\n";
	else if(n==1)
		cout<<"2"<<endl;
	else if(n==2)
		cout<<"2 3"<<endl;
	else
	{
		while(1)
		{
			temp=IsPrime(i++);
			if(temp==0)
			{}
			else
			{
				check++;
				if(check<=n)
					cout<<i-1<<" ";
				else 
					break;
			}
		}
		cout<<endl;
	}
	return 0;
}
