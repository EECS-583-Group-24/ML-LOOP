#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int cmp(const void *a,const void *b){
    if(*(int*)a>*(int*)b){return 1;}
    else if(*(int*)a<*(int*)b){return -1;}
    else {return 0;}
}
int aa[200005];

int main(void){
int n;
int a[200005];
int max=-100,max2=-101;
scanf("%d",&n);

for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
memcpy(aa,a,sizeof(a));

qsort(aa,n,sizeof(int),cmp);
//配列の最大値と2番目に大きい最大値を求める
//ただし配列の最大値が複数存在するとき、max2=maxとする。
for(int i=0;i<n;i++){
    if(max<=aa[i]){max=aa[i];}
}

if(aa[0]==aa[1]){max2=max;}
else{
    for(int i=0;i<n;i++){
        if(aa[i]==max){continue;}
        else if(max2<=aa[i]){max2=aa[i];}
    }
}

for(int i=0;i<n;i++){
    //除外した配列が最大値かつ最大値が配列に1つしかないとき
    if(a[i]==max&&max!=max2){printf("%d\n",max2);}
    //除外した配列が最大値かつ最大値が配列に複数あるとき
    else if(a[i]==max&&max==max2){printf("%d\n",max2);}
    //外した配列が最大値じゃないとき
    else{printf("%d\n",max);}
}
} 
