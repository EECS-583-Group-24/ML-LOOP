#include<stdio.h>
#include<string.h>

int main(void){
    char s[11], x[11];
    scanf("%s", s);
    int leng;
    leng = strlen(s);
    int j=0;
    for(int i=0;i<leng;i++){
        if(s[i]=='B'){
            if(j>0){
                j--;
                x[j]='\0';
            }
        }
        else{
            x[j]=s[i];
            j++;
        }
    }
    leng = strlen(x);
    for(int i=0;i<leng;i++){
        printf("%c",x[i]);
    }
    printf("\n");
    return 0;
}
