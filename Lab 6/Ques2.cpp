#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double row,col,arr[10][10],trace=0,norm=0,sum=0;
	cout<<"Enter the row and column of the matrix\n";
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
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i==j)
				trace+=arr[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			sum+=pow(arr[i][j],2);
		}
	}
	norm=pow(sum,0.5);
	cout<<"Trace : "<<trace<<'\n'<<"Norm : "<<norm<<endl;
	return 0;
}
