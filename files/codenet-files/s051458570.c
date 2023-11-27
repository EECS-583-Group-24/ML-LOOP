#include <stdio.h>
#define MAX_S 10

int main(){
    int i;
    char s[MAX_S+1], t[MAX_S+1];
    int t_num=0;        //次に打ち込む場所
    
    scanf("%s", s);
    for (i=0; s[i]!='\0'; i++){
        if (s[i] == '0')
            t[t_num++] = '0';
        else if (s[i] == '1')
            t[t_num++] = '1';
        else if (s[i] == 'B')
            if (t_num > 0) t_num--;
    }
    
    for (i=0; i<t_num; i++)
        printf("%c", t[i]);
    printf("\n");
    return 0;
}
