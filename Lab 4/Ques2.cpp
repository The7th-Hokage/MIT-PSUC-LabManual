#include<iostream>
using namespace std;
int main()
{
	int a,b,count=0;
	cout<<"Enter the two numbers\n";
	cin>>a>>b;
	cout<<"Prime numbers : ";
	for(int i=a; i<=b; i++)
	{ count=0;
		for(int j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}
