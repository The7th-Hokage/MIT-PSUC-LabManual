#include<iostream>
using namespace std;

int Print(int n)
{
	static int temp=n+1;
	cout<<temp-(n)<<" ";
	n--;
	if(n==1)
		cout<<temp-1<<endl;
	else
		return Print(n);
}

int main()
{
	int n;
	cout<<"Enter N\n";
	cin>>n;
	Print(n);
	return 0;
}
