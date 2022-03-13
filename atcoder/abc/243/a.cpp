#include<iostream>             
int main(){int v,a,b,c,x;std::cin>>v>>a>>b>>c;x=v%(a+b+c);puts(x<a?"F":(x<a+b?"M":"T"));}
