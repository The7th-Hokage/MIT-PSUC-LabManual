#include<iostream>
using namespace std;
int main()
{
	int row,col,arr[10][10],check=0,temp;
	cout<<"Enter row and column of matrix\n";
	cin>>row>>col;
	cout<<"Enter the matrix\n";
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>arr[i][j];
	cout<<"The entered array is\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	cout<<"Array after exchanging diagonals\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i+j+1==row)
			{
				temp=arr[i][j];
				arr[i][j]=arr[check][check];
				arr[check][check]=temp;
				check++;
			}
		}
	}
	cout<<"Matrix after the diagonals have been interchanged\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
