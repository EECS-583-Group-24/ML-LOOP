#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char str[8];
     int a,b,c;

	scanf("%s", str);

	if(str[0]=="1"){
	a=9;
	}else{
	
	if(str[0]=="9"){
	a=1;
	}else{
	
	a=atoi(str[0]);
	}}

	
	if(str[1]=="1"){
	b=9;
	}else{
	
	if(str[1]=="9"){
	b=1;
	}else{
	
	b=atoi(str[1]);
	}};


	if(str[2]=="1"){
	c=9;
	}else{
	
	if(str[2]=="9"){
	c=1;
	}else{
	
	c=atoi(str[2]);
	}};

	printf("%d",100*a+10*b+c);
}
