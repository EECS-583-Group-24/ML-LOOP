
#include <stdio.h>
#include <string.h>
int main(void){
    char s[12],buf[12]={0};
    scanf("%s",s);
    //cntは現時点でのbuf内の要素数
    int i,j,cnt=0;
    for(j=0;j<strlen(s);j++){
        if(s[j]=='0'){
            buf[cnt]='0';
            cnt++;
        }else if(s[j]=='1'){
            buf[cnt]='1';
            cnt++;
        }else if(cnt!=0){
            buf[cnt-1]=0;
            cnt--;
        }
    }
    printf("%s\n",buf);
    return 0;
}