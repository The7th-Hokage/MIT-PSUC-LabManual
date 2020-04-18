#include<iostream>
using namespace std;
int main()
{
	int n,arr[20],i,temp,choice;
	
	cout<<"Enter the size of array you want to enter\n";
	cin>>n;
	
	cout<<"Enter the array\n";
	for(i=0;i<n;i++)
		cin>>arr[i];
	arr[i]='\0';
	
	cout<<"Entered array is : ";
	i=0;
	while(arr[i]!='\0')
	{
		cout<<arr[i]<<" ";
		i++;
	}

	cout<<"\nEnter 1. for ascending order and 2. for descending order\n";
	cin>>choice;
	
	//Bubblesort code below:
	if(choice==1)
	{
	for(i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
		}
	}
	}
			
	else if(choice==2)
			{
				for(i=0; i<n-1;i++)
				{
					for(int j=0; j<n-i-1; j++)
					{
						if(arr[j]<arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				        }
				}
			}
	else
		cout<<"Enter a valid number";

	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;

	return 0;
}
