#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"Enter the numbers n and k\n";
	cin>>n>>k;
	for(int i=1; i<=n; i++)
	{
		for(int j=1;j<=k;j++)
		{
			cout<<i<<" x "<<j<<" = "<<i*j<<endl;
		}
		cout<<endl;
	}
	return 0;
}
