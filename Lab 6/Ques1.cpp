#include<iostream>
using namespace std;
int main()
{
	int row,col,arr[10][10],arr2[10][10],counter=0;
	
	cout<<"Enter the row and column of matrix\n";
	
	cin>>row>>col;
	
	cout<<"Enter the matrix\n";
	
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>arr[i][j];

	cout<<"The entered matrix is\n";

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}

	cout<<"The transposed matrix is\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
				arr2[i][j]=arr[j][i];
	}

	cout<<"The transposed matrix is\n";

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<arr2[i][j]<<" ";
		cout<<endl;
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]!=arr[j][i])
				counter++;
		}
	}

	if(counter==0)
		cout<<"The matrix is symmetric"<<endl;
	else
		cout<<"The matrix is not symmetric"<<endl;
		return 0;
}
