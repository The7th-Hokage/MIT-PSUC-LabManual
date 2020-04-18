#include<iostream>
using namespace std;
int main()
{
	string str;
	char str2[100];
	int length=0,i=0,check=0;
	cout<<"Enter the string\n";
	getline(cin,str);
	while(str[i]!='\0')
		i++;
	length=i;
	str2[length]='\0';
	for(int i=length-1;i>=0;i--)
		str2[length-1-i]=str[i];
	cout<<"Reversed string : "<<str2<<endl;
	for(int i=0;i<length;i++)
		if(str[i]!=str2[i])
		{
			check++;
			break;
		}
	if(check==0)
		cout<<"It is a palindrome\n";
	else
		cout<<"It is not a palindrome\n";
	return 0;
}
