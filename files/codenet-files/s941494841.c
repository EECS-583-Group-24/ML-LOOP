#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
char s[11];
int a[20];
scanf("%s",s);
int count=0;
for(int i=0;s[i]!='\0';i++){
    if(s[i]=='0'){
        a[count]=0;count++;
    }
    else if(s[i]=='1'){
        a[count]=1;count++;
    }
    else if(count!=0){
        a[count]=3;count--;
    }
    else{continue;}
}
    for(int i=0;a[i]!=3;i++){
        printf("%d",a[i]);
    }
}



