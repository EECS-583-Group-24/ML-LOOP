#include <stdio.h>
int main (void)
{
    char s[15] ={'\0'};
    char d[15] = {'\0'};
    int count = 0;
    int len = 0;
    int i;
    int j=0;
    scanf("%s",s);
    while(s[len]){
        len++;
    }   
    for(i=0;i<len;i++){
        if(s[i] =='0' || s[i] == '1'){
            d[j] = s[i];
            j++;
        }
        if(s[i] =='B'){
            if(j > 0){
                j--;
            }
        else{

        }
        }
    }
    printf("%s",d);
    return 0;
}