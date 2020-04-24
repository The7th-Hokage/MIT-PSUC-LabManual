#include<iostream>
#include<string.h>
using namespace std;

struct sentence{
	char str[30];
};

int main()
{
	string str1;
	char temp[30],strcheck[30]="123";
	int i=0,j=0,k=0,count1=0;
	sentence w[15];
	cout<<"Enter the string\n";
	getline(cin,str1);
	while(1)
	{
		temp[k]=str1[i];
		k++;
		if(str1[i]==' '||str1[i]=='\0')
		{
			temp[--k]='\0';
			strcpy(w[j].str,temp);
			for(int l=0;l<30;l++)
				temp[l]=0;
			k=0;
			j++;
			if(str1[i]=='\0')
				break;
		}
		i++;
	}
	//j contains the number of words
	for(i=0;i<j;i++)
	{
		for(k=i+1;k<=j;k++)
		{
			if(strcmp(w[i].str,w[k].str)==0)
			{
				count1++;
				strcpy(w[k].str,strcheck);
			}
		}
		if(count1>0)
		{
			strcpy(w[i].str,strcheck);
			count1=0;
		}
	}

	for(i=0;i<j;i++)
	{
		if(strcmp(w[i].str,strcheck)==0)
		{}
		else
			cout<<w[i].str<<" ";
	}
	cout<<endl;
	return 0;
}
