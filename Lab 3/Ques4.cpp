#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,c,D,temp,temp1,root1,root2;
	cout<<"ax^2 + bx + c. Enter a,b and c respectively\n";
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	if(D>0){
		cout<<"Roots are real and distinct\n";
		temp=pow(D,0.5);
		temp1=-b+temp;
		root1=temp1/(2*a);
		temp1=-b-temp;
		root2=temp1/(2*a);
		cout<<"Root1 : "<<root1<<endl;
		cout<<"Root2 : "<<root2<<endl;
	}

	else if(D==0)
	{
		cout<<"The roots are real and equal\n";
		root1=-b/(2*a);
		root2=-b/(2*a);
		cout<<"Root1 : "<<root1<<endl;
		cout<<"Root2 : "<<root2<<endl;
	}

	else{
		cout<<"The roots are imaginary and distinct\n";
		temp=-b/(2*a);
		temp1=-D;
		D=temp1;
		temp1=pow(D,0.5);
		cout<<"Root1 : "<<temp<<" + "<<temp1<<"i"<<endl;
		cout<<"Root2 : "<<temp<<" - "<<temp1<<"i"<<endl;
	}
	return 0;
}
