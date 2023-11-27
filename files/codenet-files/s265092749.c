/*
Digit Number
^¦çê½QÂÌ® a Æ b ÌaÌðoÍµÄI¹·évOðì¬µÄº³¢B

Input
¡Ìf[^Zbgª^¦çêÜ·Bef[^ZbgÍPsÉ^¦çêÜ·Bef[^ZbgÍQÂÌ® a Æ b ªPÂÌXy[XÅæØçêÄ^¦çêÜ·BüÍÌIíèÜÅµÄº³¢Ba Æ b ÍñÌ®ÆµÜ·B

Output
ef[^Zbg²ÆÉAa + b ÌðoÍµÄº³¢B

Sample Input
5 7
1 99
1000 999
Output for the Sample Input
2
3
4
*/

/*
@char dummy[10];
@int c, a;
@c=12345; 
@a=printf(dummy, "%d",c); 
 */

#include <stdio.h>

int main() {
	char dummy[1000];
	int a[3],c,d,i;

	for (i=0; i<3; i++){
		scanf("%d", &c);
		scanf("%d", &d);
		a[i] = sprintf(dummy, "%d", c+d);
	}

			printf("%d", a[0]);
						printf("%d", a[1]);
									printf("%d", a[2]);

									return 0;
}