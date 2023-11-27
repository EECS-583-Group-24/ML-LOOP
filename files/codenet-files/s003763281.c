#include<stdio.h>
#include<string.h>

int main(){
    char s[11],str[11];
    scanf("%s",s);
    int i,j,len;
  	len = strlen(s);
  	j = 0;
  for(i=0;i<len+1;i++){
    str[i]='\0';
  }
    for(i=0;i<len;i++){
        if(s[i]!='B'){
            str[j]=s[i];
            j++;
        }
        else if(j > 0){
            j--;
            str[j]='\0';
        }
    }
    printf("%s",str);
 
 
 
 
}