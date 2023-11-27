#include<stdio.h>
#include<string.h>

int main()
{

	char n1[4];
	char a;
	char b;
	char c;
	
	scanf("%s",&n1);

	if(n1[0]==1){
	a=9;
	}else{
	
	if(n1[0]==9){
	a=1;
	}else{
	
	a=n1[0];
	}}
	
	if(n1[1]==1){
	b=9;
	}else
	
	if(n1[1]==9){
	b=1;
	}else{
	
	b=n1[1];
	}}

	if(n1[2]==1){
	c=9;
	}else{
	
	if(n1[2]==9){
	c=1;
	}else{
	
	c=n1[2];
	}}

	printf("%c%c%c",&a,&b,&c);
}