#include<iostream>
using namespace std;
int main()
{
	string str;
	int count1=0,i=0;
	cout<<"Enter the sentence\n";
	getline(cin,str);
	while(str[i]!='\0')
	{
		if(((int(str[i])>64&&int(str[i])<91)||(int(str[i])>96&&int(str[i])<123))&&(str[i+1]==' '||str[i+1]=='\0')){
				count1++;
				i++;
		}
		else
			i++;
	}
	cout<<"Number of words : "<<count1<<endl;
	return 0;
}
