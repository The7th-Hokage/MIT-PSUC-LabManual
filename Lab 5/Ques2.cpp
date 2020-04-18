#include<iostream>
using namespace std;
int main()
{
	int n,arr[20],pos,ele,newsize,choice,actualPos;
	cout<<"Enter the size of the array\n";
	cin>>n;
	cout<<"Enter the array\n";
	for(int i=0; i<n;i++)
		cin>>arr[i];
	cout<<endl;
	cout<<"The entered array is : ";
	for(int j=0;j<n;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	cout<<"Enter 1. to Insert or 2. to Delete an element\n";
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter the element you want to enter\n";
		cin>>ele;
		cout<<"Enter the position you want to insert in\n";
		cin>>pos;
		actualPos=pos-1;
		newsize=n+1;
		for(int i=n-1; i>=actualPos; i--)
			{
				arr[newsize-1]=arr[i];
				newsize--;
			}
		arr[actualPos]=ele;
		arr[n+1]='\0';
	}

	else if(choice==2)
	{
		cout<<"Enter the number you want to delete\n";
		cin>>ele;

		for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
		{
			if(arr[i]==ele)
				actualPos=i;
		}
		for(int i=actualPos+1; i<=n; i++)
			arr[i-1]=arr[i];
		n--;
		arr[n]='\0';
	}

	else
		cout<<"Enter a valid choice\n";

	cout<<"The new array is : ";
	int j=0;
	while(arr[j]!=0)
	{
		cout<<arr[j]<<" ";
		j++;

	}
	cout<<endl;

	return 0;
}
