#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(void){
	int i,j,N,A[200005],temp,submax=0,max=0,count=-1;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	//max and submax決定
	for(i=0;i<N;i++){
		if(A[i]>max){
			max = A[i];
		}else{
			if(A[i] > submax){
				submax = A[i];
			}
		}
	}

	/* 最大値と等しい行数をカウント */
	for(i=0;i<N;i++){
		if(A[i]==max){
			count++;
		}
	}
	
	//出力処理
	for(i=0;i<N;i++){ 
		for(i=0;i<N;i++){
			if(A[i]!=max){
				printf("%d\n",max);
			}else{
				if(count>0){
					printf("%d\n",max);
				}else{
					printf("%d\n",submax);
				}
			}
		}
	}
}