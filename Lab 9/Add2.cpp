#include<iostream>
using namespace std;

int sum=0;

int Product(int a,int b)
{
	sum=sum+a;
	if(b>1)
		return Product(a,--b);
	else
		return sum;
}

int main()
{
	int a,b;
	cout<<"Enter the two numbers\n";
	cin>>a>>b;
	cout<<"Product : "<<Product(a,b)<<endl;
	return 0;
}
