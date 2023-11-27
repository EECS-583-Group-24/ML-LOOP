#include<stdio.h>


 int gcd ( int a, int b ){
int c;
while ( a != 0 ) {
 		c = a; a = b%a;  b = c;
}
return b;
 }
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",gcd(x,y));
}