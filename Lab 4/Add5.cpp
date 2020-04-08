#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter the number\n";
	cin>>num;
	for(int i=1; i<=num; i++)
	{
		for(int j=0; j<i; j++)
			{
				count++;
				cout<<count<<" ";
			}
		cout<<endl;
	}
	return 0;
}
