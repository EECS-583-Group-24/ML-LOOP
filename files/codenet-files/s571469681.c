#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>



int main()
{
	int	   x,y,i;
	int    min,max;
	int    mod;
	char   inp[128];

	while(1) {
		gets(inp);
		sscanf(inp,"%d %d",&x,&y);
		/*--- CALC ---*/
		if (x>y) {
			min=y;
			max=x;
		}
		else {
			min=x;
			max=y;
		}
		mod = max % min;
		if ((mod%2)!=0) {
			break;
		}
		if (y>mod) {
			min=mod;
			max=y;
		}
		else {
			min=y;
			max=mod;
		}
		mod = max % min;

		break;
	}
	printf("%d\n",mod);
	return 0;
}