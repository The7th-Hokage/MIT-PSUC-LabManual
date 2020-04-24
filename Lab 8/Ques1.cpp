#include<iostream>
using namespace std;

int fact(int n)
{
	int result=1;
	for(int i=n;i>1;i--)
		result=result*i;
	return result;
}

int main()
{
	int n,r,nf,nmrf,rf,result;
	cout<<"To calculate nCr, enter n and r respectively\n";
	cin>>n>>r;
	nf=fact(n);
	rf=fact(r);
	nmrf=fact((n-r));
	result=nf/(rf*nmrf);
	cout<<"nCr : "<<result<<endl;
	return 0;
}
