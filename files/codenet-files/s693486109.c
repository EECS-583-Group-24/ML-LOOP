# include "stdio.h"

int main(){
    char s[11],a[11];
    scanf("%s",s);
    int c=0;

    for(int i=0;i<10;i++){
        if(s[i]!='B'){
            a[c]=s[i];
            c++;
        }else{
            if(c!=0) c--;
            a[c]='\0';
        }
    }
printf("%s\n",a);




}
