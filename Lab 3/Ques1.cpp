#include<iostream>
using namespace std;
int main()
{
	int temp,rem;
	cout<<"Enter the number\n";
	cin>>temp;
	rem=temp%2;
	if(rem==0)
		cout<<"It is an even number\n";
	else
		cout<<"It is an odd number\n";
	return 0;
}
