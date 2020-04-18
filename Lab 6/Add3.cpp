#include<iostream>
using namespace std;
int main()
{
	int row,col,arr[10][10],check=0;
	cout<<"Enter the row and column of the matrix\n";
	cin>>row>>col;
	if(row==col)
	{
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

		for(int i=0;i<row;i++)
			for(int j=0;j<=i;j++)
				if(arr[i][j]==0)
					check++;

		for(int i=0;i<row;i++)
			for(int j=col-1;j>i;j--)
				if(arr[i][j]!=0)
					check++;


		if(check==0)
			cout<<"It is a lower triangular matrix\n";
		else
			cout<<"It is not a lower triangular matrix\n";
	}

	else
		cout<<"It is not a lower triangular matrix\n";
	
	return 0;
}
