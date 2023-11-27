#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(void){
    int n;
    scanf("%d",&n);

    printf("%d\n",(10-n/100)*100 + (10-n%10) + (10-(n/10)%10)*10);
    return 0;
}
