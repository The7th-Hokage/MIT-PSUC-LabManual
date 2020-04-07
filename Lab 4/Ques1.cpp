#include<iostream>
using namespace std;
int main()
{
	int n, reverse=0,temp;
	cout<<"Enter the number\n";
	cin>>n;
	temp=n;
	while(n!=0)
	{
	reverse=n%10 + reverse*10;
	n=n/10;
	}
	cout<<"The reverse is : "<<reverse<<endl;
	if(temp==reverse)
		cout<<"The number is palindrome\n";
	else
		cout<<"The number is not a palidrome\n";
	return 0;
}
