
#include <stdio.h>

int main(void){
    char s[12],buf[12];
    scanf("%s",s);
    //cntは現時点でのbuf内の要素数
    int i,cnt=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]=='0'){
            buf[cnt]='0';
            cnt++;
        }else if(s[i]=='1'){
            buf[cnt]='1';
            cnt++;}
        else if(cnt>0){
            buf[cnt-1]=0;
            cnt--;
        }
    }
    printf("%s\n",buf);
}