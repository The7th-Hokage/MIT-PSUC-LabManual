#include<iostream>
using namespace std;
int main()
{
	int n,counter=0, arr[50];
	cout<<"Enter the size of the array\n";
	cin>>n;
	cout<<"Enter the array now\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"The entered array is : \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"Prime numbers are : ";
	for(int i=0; i<n;i++)
	{
		for(int j=2;j<=arr[i]/2;j++)
		{
			if(arr[i]%j==0)
				counter++;
		}
		if(counter==0 && arr[i]!=1)
			cout<<arr[i]<<" ";
		else
			counter=0;
	}
	cout<<endl;
	return 0;
}
