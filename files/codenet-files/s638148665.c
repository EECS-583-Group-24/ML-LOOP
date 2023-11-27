#include <stdio.h>
int main(void){
int n;
scanf("%d\n",&n);

int a[100];

int i,j,value;
for(i=0;i<n;++i)
   scanf("%d",&a[i]);


for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]<a[j]){
            value=a[i];
            a[i]=a[j];
            a[j]=value;
        }
    }
}
for(i=0;i<n;i++){
if(i < n){
printf("%d ",a[i]);
}
else{
printf("%d\n",a[i]);
}
}
return 0;
}


