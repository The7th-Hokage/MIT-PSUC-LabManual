#include<iostream>
using namespace std;

int sum=0;

int FIB(int n)
{
	if(n==0 || n==1)
		return n;
	else
		return (FIB(n-1)+FIB(n-2));
}

int main()
{
	int n;
	cout<<"Enter the N\n";
	cin>>n;
	for(int i=0;i<n;i++)
		cout<<FIB(i)<<" ";
	cout<<endl;
	return 0;
}
