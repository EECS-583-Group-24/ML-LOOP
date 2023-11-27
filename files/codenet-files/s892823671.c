#include <stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int data[n];
for(i=0;i<n;i++){
	scanf("%d",&data[i]);
}
for(i=n-1;i>0;i--){
	printf("%d",data[i]);
}
printf("%d\n",data[0]);
return 0;
}