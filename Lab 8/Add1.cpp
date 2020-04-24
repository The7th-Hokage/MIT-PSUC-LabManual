#include<iostream>
#include<string.h>
using namespace std;

int IsPalin(char string[])
{
	char revstring[50];
	int length1=strlen(string);
	revstring[length1]='\0';
	for(int i=length1-1;i>=0;i--)
		revstring[length1-1-i]=string[i];
	if(strcmp(revstring,string)==0)
		return 1;
	else
		return 0;
}

int main()
{
	string strtemp;
	int i=0;
	char string[50];
	cout<<"Enter the string\n";
	getline(cin,strtemp);
	while(strtemp[i]!='\0')
	{
		string[i]=strtemp[i];
		i++;
	}
	string[i]='\0';
	if(IsPalin(string))
		cout<<"It is a palindrome\n";
	else
		cout<<"It is not a palidrome\n";
	return 0;
}
