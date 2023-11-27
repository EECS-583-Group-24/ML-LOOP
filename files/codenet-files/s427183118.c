#include<stdio.h>

void keybord(char s[]){
    char k[11];
    int i;
    int j = 0;

    for(i = 0; s[i]; i++){
        if(s[i] == '0'){
            k[j] = s[i];
            j++;
        }

        if(s[i] == '1'){
            k[j] = s[i];
            j++;
        }

        if(s[i] == 'B' && j > 0){
            j--;
            k[j] = '\0';
        }

    }

printf("%s\n", k);
}

int main(void){
    char s[11];

    scanf("%s", s);

    keybord(s);

    return 0;
}