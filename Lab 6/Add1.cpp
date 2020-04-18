#include<iostream>
using namespace std;
int main()
{
	int row,col,arr[10][10],rowsum=0,colsum=0;
	cout<<"Enter the row and column of the matrix\n";
	cin>>row>>col;
	
	cout<<"Enter the matrix\n";
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>arr[i][j];
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
			rowsum=rowsum+arr[i][j];
		}
		cout<<"-> "<<rowsum<<endl;
		rowsum=0;
	}
	
	for(int i=0;i<col;i++)
		cout<<"| ";
	cout<<endl;
	
	for(int j=0;j<col;j++)
	{
		for(int i=0;i<row;i++)
		{
			colsum=colsum+arr[i][j];
		}
		cout<<colsum<<" ";
		colsum=0;
	}
	cout<<endl;
	
	return 0;
}
