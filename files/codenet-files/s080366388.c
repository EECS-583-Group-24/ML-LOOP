#include<stdio.h>
#include<string.h>

int main()
{

	char n[4];
	char a;
	char b;
	char c;
	
	scanf("%s",&n);

	if(n[0]==1){
	a=9;
	}else{
	
	if(n[0]==9){
	a=1;
	}else{
	
	a=n[0];
	}}
	
	if(n[1]==1){
	b=9;
	}else
	
	if(n[1]==9){
	b=1;
	}else{
	
	b=n[1];
	}}

	if(n[3]==1){
	c=9;
	}else{
	
	if(n[3]==9){
	c=1;
	}else{
	
	c=n[3];
	}}

	printf("%c%c%c",&a,&b,&c);
}