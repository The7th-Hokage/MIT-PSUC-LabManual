#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter the number\n";
	cin>>num;
	while(num!=0)
	{
		sum=num%10+sum;
		num=num/10;
		if(sum>9 && num==0)
		{
			num=sum;
			sum=0;
		}
	}

	cout<<"Generic root : "<<sum<<endl;
	return 0;
}
