#include<iostream>
using namespace std;
int main()
{
    double a,b,sum,diff,prod,quot;
    cout<<"Enter the two numbers\n";
    cin>>a>>b;
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    cout<<"Sum : "<<sum<<'\n'<<"Difference : "<<diff<<'\n'<<"Product : "<<prod<<'\n'<<"Quotient"<<quot<<endl;
    return 0;
}
