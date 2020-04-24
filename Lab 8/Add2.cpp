#include<iostream>
using namespace std;
int CornerSum(int row,int col)
{
	int arr[10][10],sum=0;
	cout<<"Enter the matrix\n";
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>arr[i][j];

	cout<<"Entered matrix : \n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}

	sum=arr[0][0]+arr[0][col-1]+arr[row-1][col-1]+arr[row-1][0];
	return sum;
}

int main()
{
	int row,col,answer;
	cout<<"Enter the row and column of the matrix\n";
	cin>>row>>col;
	answer=CornerSum(row,col);
	cout<<"Answer : "<<answer<<endl;
	return 0;
}
