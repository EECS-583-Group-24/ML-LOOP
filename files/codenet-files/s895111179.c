#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
   char str[15];
   char* token;
   int  val_a, val_b, cnt;
   
   for (cnt=0; cnt<200; cnt++) {   
        fgets(str,sizeof(str),stdin);
        if (!(strcmp(str, "\n"))) {
            break;
        }
        token = strtok( str, " " );
        if ( token != NULL ) {
            val_a = atoi(token); 
            token = strtok( NULL, " " );
            val_b = atoi(token);
            if (val_a >= 0 && val_b<= 1000000) {
                int sum = val_a+val_b;
                int spcnt = 0;
                while (sum > 0) {
                    sum /= 10;
                    spcnt++;
                }
                printf("%d\n", spcnt);
            }
        } else {
            break;
        }
   }
   return 0;
}