#include<iostream>
using namespace std;

int  Largest(int *arr, int n)
{
	int temp,j=0;
	arr[n]='\0';
	cout<<endl;
	//bubblesort only one iteration required
	for(int i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
				{
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
		}
	cout<<"Answer : ";
	return arr[n-1];
}

int main()
{
	int n,arr[15];
	cout<<"Enter N\n";
	cin>>n;
	cout<<"Enter the numbers now\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Entered arrays is : \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"The largest number is : "<<Largest(arr,n)<<endl;
	return 0;
}
