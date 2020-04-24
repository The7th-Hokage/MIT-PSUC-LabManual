#include<iostream>
using namespace std;

struct stringcollection{
	string str;
}str1[10];

int compare(string str1, string str2)
{
	int i=0;
	while(str1[i]!='\0' || str2[i]!='\0')
	{
		if(str1[i]==str2[i])
		{ i++; }
		else
		{
			if(int(str1[i])>int(str2[i]))
				return 0;
			else 
				return 1;
			i++;
		}
	}
	if(str1[i]=='\0')
		return 1;
	else 
		return 0;
}

void sort(int n)
{
	int temp1;
	stringcollection temp2;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			temp1=compare(str1[j].str,str1[j+1].str);
			if(temp1==0)
			{
				temp2.str=str1[j].str;
				str1[j].str=str1[j+1].str;
				str1[j+1].str=temp2.str;
			}
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the number of names of you want to enter\n";
	cin>>n;
	cout<<"Enter the names now\n";
	for(int i=0;i<n;i++)
		cin>>str1[i].str;
	cout<<"The entered names are :\n";
	for(int i=0;i<n;i++)
		cout<<str1[i].str<<endl;
	cout<<"\nSorted names are as followed\n";
	sort(n);
	for(int i=0;i<n;i++)
		cout<<str1[i].str<<endl;
	cout<<endl;
	return 0;
}

