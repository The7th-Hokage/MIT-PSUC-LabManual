#include<iostream>
using namespace std;
int main()
{
	int row,col,arr[10][10],row1,row2,col1,col2,arr2[10][10],temp;
	
	cout<<"Enter the rows and columns of the matrix\n";
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

	cout<<"Enter the two rows you want to exchange\n";
	cin>>row1>>row2;
	if(row1<=row && row2<=row && row2>0 && row1>0)
	{}
	else
	{
		cout<<"Enter a valid row number\n";
		return 0;
	}

	cout<<"Enter the two columns you want to exchange\n";
	cin>>col1>>col2;
	if(col1<=col && col2<=col && col1>0 && col2>0)
	{}
	else
	{
		cout<<"Enter a valid column number\n";
		return 0;
	}

	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			arr2[i][j]=arr[i][j];

	for(int j=0;j<col;j++)
	{
		temp=arr[row1-1][j];
		arr[row1-1][j]=arr[row2-1][j];
		arr[row2-1][j]=temp;
	}
	cout<<"Matrix after exchanging rows\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}

	for(int i=0;i<row;i++)
	{
		temp=arr2[i][col1-1];
		arr2[i][col1-1]=arr2[i][col2-1];
		arr2[i][col2-1]=temp;
	}
	cout<<"Matrix after exchanging columns\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<arr2[i][j]<<" ";
		cout<<endl;
	}

	return 0;
}
