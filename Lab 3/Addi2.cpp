#include <bits/stdc++.h> 
  
using namespace std; 
  
int main() 
{ 
    int a,b,c,smallest,temp; 
    cout<<"Enter a,b and c\n";
    cin>>a>>b>>c;
    a>b && a>c ? b<c? smallest=b : smallest=c : temp=a; //This temp=a done just to remove a bug which was causing error on using "continue" in place of temp=a;
    b>a && b>c ? a<c?smallest=a : smallest=c : temp=a;
    c>a && c>b ? a<b? smallest = a : smallest =b : temp=a;
    cout<<"smallest : "<<smallest;
    return 0; 
} 
