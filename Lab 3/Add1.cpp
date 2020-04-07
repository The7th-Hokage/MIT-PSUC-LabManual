#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number\n";
	cin>>num;
	if(num>0)
		cout<<"The number is positive\n";
	else if(num==0)
		cout<<"The number is zero\n";
	else
		cout<<"The number is negative\n";
	return 0;
}
