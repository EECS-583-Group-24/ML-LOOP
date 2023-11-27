#include<stdio.h>
int main(void){
	int n;
	int a[200000]={0};
	int max1=0;
	int max2=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(max1<a[i]){
			max1=a[i];
		}else if(max2<a[i]){
			max2=a[i];
		}
	}
	int cnt[200000]={0};
	for(int i=1;i<=n;i++){
		if(max1==a[i]){
			cnt[i]++;	
		}
	}
	for(int i=1;i<=n;i++){
		if(cnt[i]>=1){
			printf("%d\n",max2);
		}else{
			printf("%d\n",max1);
		}
	}
	return 0;
}