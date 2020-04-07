#include<iostream>
using namespace std;
int main(){
	int a,b,c,largest;
	cout<<"Enter three numbers\n";
	cin>>a>>b>>c;
	if(a<b & a<c)
	{
		if(b<c)
			largest=c;
		else
			largest=b;
	}

	else if(b<a & b<c)
	{
		if(a<c)
			largest=c;
		else
			largest=a;
	}

	else if(c<a & c<b)
	{
		if(a<b)
			largest=b;
		else
			largest=a;
	}

		cout<<"Largest = "<<largest<<endl;

	return 0;
}
