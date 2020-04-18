#include<iostream>
using namespace std;
int main()
{
	int row1,col1,row2,col2,arr1[10][10],arr2[10][10],arr3[10][10],temp;
	cout<<"Enter the number of rows and columns of first matrix\n";
	cin>>row1>>col1;	
	cout<<"Enter the first matrix\n";
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
			cin>>arr1[i][j];
	}

	cout<<"Enter the number of rows and columns of second matrix\n";
	cin>>row2>>col2;
	cout<<"Enter the second matrix\n";

	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<col2;j++)
			cin>>arr2[i][j];
	}

	for(int i=0;i<row1;i++)
		for(int j=0;j<col2;j++)
			arr3[i][j]=0;

	cout<<"Matrix 1 : \n";
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
			cout<<arr1[i][j]<<" ";
		cout<<endl;
	}

	cout<<"\nMatrix 2 : \n";

	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<col2;j++)
			cout<<arr2[i][j]<<" ";
		cout<<endl;
	}

	if(col1!=row2)
		cout<<"The matrix cannot be multiplied\n";
	else
	{
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col2;j++)
			{
				for(int k=0;k<row1;k++)
				{
					temp=arr1[i][k]*arr2[k][j];
					arr3[i][j]=arr3[i][j]+temp;
				}
			}
		}
	}

	cout<<"Result : \n";

	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col2;j++)
		{
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
