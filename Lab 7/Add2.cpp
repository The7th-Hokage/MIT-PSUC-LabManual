#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i=0,count1=0,length1,pos;
	string str1,substr1;
	cout<<"Enter the string\n";
	getline(cin,str1);
	cout<<"Enter the substring to be found\n";
	getline(cin,substr1);
	cout<<"Entered string : "<<str1<<endl;
	cout<<"Entered substring : "<<substr1<<endl;
	length1=substr1.length();
	while(str1[i]!='\0')
	{
		if(str1[i]==substr1[0])
		{pos=i;
			for(int j=0;j<length1;j++)
			{
				if(str1[i]!=substr1[j])
					break;
				count1++;
				i++;
			}
		}
		if(count1!=length1)
			count1=0;
		else if(count1==length1)
			break;
		i++;
	}
	if(count1==length1)
		cout<<"The substring is present at : "<<pos+1<<endl;
	else
		cout<<"The substring is not present\n";
	return 0;
}
