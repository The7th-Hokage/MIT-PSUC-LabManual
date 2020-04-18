#include<iostream>
using namespace std;
int main()
{
	int row,col,arr[10][10],rowsum=0,colsum=0,pdsum=0,sdsum=0,check;
	cout<<"Enter the row and column of the matrix\n";
	cin>>row>>col;
	if(row==col)
	{
		cout<<"Enter the matrix\n";
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				cin>>arr[i][j];

		//Displaying the entered matrix
		cout<<"The entered matrix is\n";
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
		
		//Filling value in check
		for(int i=0;i<col;i++)
			rowsum=rowsum+arr[0][i];
		check=rowsum;
		rowsum=0;

		//Checking rowsum
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				rowsum=rowsum+arr[i][j];
			}
			if(check==rowsum)
			{rowsum=0;}
			else
			{
				cout<<"It is not a magic square\n";
				return 0;
			}
		}

		//checking for colsum
		for(int j=0;j<col;j++)
			{
			for(int i=0;i<row;i++)
				colsum=colsum+arr[i][j];
			if(check==colsum)
			{colsum=0;}
			else
			{
				cout<<"It is not a magic square\n";
				return 0;
			}
			}
		
		//check for principal diagonal sum
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				if(i==j)
					pdsum=pdsum+arr[i][j];
			if(check!=pdsum)
			{
				cout<<"pdsum : "<<pdsum<<endl;
				cout<<"Check Principal diagonal\n";
				cout<<"It is not a magic square\n";
				return 0;
			}

		//Checking for secondary diagonal sum
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				if(i+j+1==row)
					sdsum=sdsum+arr[i][j];
			if(check!=sdsum)
			{
				cout<<"sdsum : "<<sdsum<<endl;
				cout<<"Check Secodary daigonal\n";
				cout<<"It is not a magic square\n";
				return 0;
			}

		cout<<"It is a magic square\n";

	} //Ending of overall if
	else
		cout<<"The matrix cannot be a square matrix\n";
	return 0;
}
