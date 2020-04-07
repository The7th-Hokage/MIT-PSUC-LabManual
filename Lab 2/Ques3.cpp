#include<iostream>
using namespace std;
int main()
{
    double temp1,temp2;
    cout<<"Enter temperature in Fahrenheit\n";
    cin>>temp1;
    temp2=(5*(temp1-32))/9;
    cout<<"Temperature in Centigrade : "<<temp2<<endl;
    return 0;
}
