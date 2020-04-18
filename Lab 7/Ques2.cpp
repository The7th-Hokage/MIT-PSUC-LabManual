#include<iostream>
using namespace std;
int main()
{
 	string str;
	char str2[100];
	int i=0,temp;
	cout<<"Enter the string\n";
	getline(cin,str);
	while(str[i]!='\0')
	{
		if(int(str[i])>64 && int(str[i])<91)
		{
			temp=int(str[i])+32;
			str2[i]=char(temp);
		}	
		else if(int(str[i])>96 && int(str[i])<123)
		{
			temp=int(str[i])-32;
			str2[i]=char(temp);
		}
		else
			str2[i]=str[i];
		i++;
	}
	str2[i]='\0';
	cout<<str2<<endl;
	return 0;
}
