#include <stdio.h>

int main()
{
    int i,n,m,temp,count,digit[200];
	for(i=0;i<200;i++){
		scanf("%d %d",&n,&m);
		count=0;
		temp=n+m;
		while(temp>=1){
			temp=temp/10;
			count++;
		}
		digit[i]=count;
	}
	i=0;
	while(i<200){
		printf("%d\n",digit[i]);
		i++;
	}

	return 0;
}