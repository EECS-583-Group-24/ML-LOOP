#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

        char S[11];
        char S2[11];
        int i;
        int j;
        int len;

        scanf("%s",S);

        len = strlen( S );
        j = 0;
        for (i=0; i < len; i++) {
           if (S[i]  ==  '0') {
             j = j + 1;
             S2[j - 1] = '0';
           }
           if  ( S[i]  ==  '1') {
             j = j + 1;
             S2[j - 1] = '1';
           }

           if  ( S[i]  ==  'B') {
             if  ( j != 0 ) {
                 j = j - 1;
             }
           }
        }

           printf("%s\n",S2);
        
	return 0;
}