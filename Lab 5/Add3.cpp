#include<iostream>
using namespace std;
int main()
{
	int row,col,ele,counter=0,posx,posy,arr[10][10];
	cout<<"Enter the row and column number\n";
	cin>>row>>col;
	cout<<"Enter the matrix\n";
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>arr[i][j];

	cout<<"Entered matrix is : \n";
	for(int i=0; i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	cout<<"Enter the element you want to search and count\n";
	cin>>ele;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==ele)
			{
				counter++;
				if(counter==1)
				{
					posx=i;
					posy=j;
				}
			}
		}
	}
		if(counter>0)
			cout<<"The number is firstly found at the position : (" <<posx<<","<<posy<<")\nThe total number of times it has occurred is : "<<counter<<endl;
		else
			cout<<"The number is not found\n";
	return 0;
}
