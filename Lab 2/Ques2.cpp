#include<iostream>
using namespace std;
int main()
{
	double radius, area, volume;
	cout<<"Enter the radius\n";
	cin>>radius;
	area=4*3.14*radius*radius;
	volume = (4*3.14*radius*radius*radius)/3;
	cout<<"Surface Area = "<<area<<endl;
	cout<<"Volume = "<<volume;
	return 0;
}
