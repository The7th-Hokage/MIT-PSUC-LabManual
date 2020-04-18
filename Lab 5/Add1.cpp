#include<iostream>
using namespace std;
int main()
{
	int n, arr[20],smallest,largest;
	cout<<"Enter the size of the array\n";
	cin>>n;
	cout<<"Enter the array now\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	smallest=arr[0];
	
	for(int i=1;i<n;i++)
	{
		if(smallest>arr[i])
			smallest=arr[i];
	}

	largest=arr[0];

	for(int i=1;i<n;i++)
	{
		if(largest<arr[i])
			largest=arr[i];
	}

	cout<<"Smallest number in the array : "<<smallest<<endl;
	cout<<"Largest number in the array : "<<largest<<endl;
	return 0;
}
