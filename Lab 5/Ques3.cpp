#include<iostream>
using namespace std;
int main()
{
	int pos=100,ele,n,arr[20];
	cout<<"Enter the size of array\n";
	cin>>n;
	cout<<"Enter the array now\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the element you want to search\n";
	cin>>ele;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			pos=i;
			break;
		}
	}
	if(pos!=100)
		cout<<"Element found at position : "<<pos+1<<endl;
	else
		cout<<"Element not found\n";
	return 0;
}
