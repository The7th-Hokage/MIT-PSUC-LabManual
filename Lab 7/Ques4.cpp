#include<iostream>
using namespace std;
int main()
{
	int n;
	char arr[200],temp[20],k=0,wc=0;
	cout<<"Enter the number of names you want to enter\n";
	cin>>n;
	cout<<"Enter names now\n";	
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		while(temp[k]!='\0')
		{
			arr[wc]=temp[k];
			k++;
			wc++;
		}
		arr[wc]=' ';
		wc++;
		k=0;
	}
	arr[wc-1]='\0';
	cout<<"Entered names\n";
	int i=0;
	while(arr[i]!='\0')
	{
		cout<<arr[i];
		i++;
	}
	return 0;
}
