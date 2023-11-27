#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
int main(void) {
   int W,H,x,y;
 scanf("%d %d %d %d",&W,&H,&x,&y);
 double res=0;
 int count =0;
 double test = (double)W/2;
 if ((double)x==((double)W/2)) {res=H*((double)W/2);
                        count++;
                        }
 if ((double)y==((double)H/2)) {res=W*((double)H/2);
                        count++;
                       }
if (count==2) printf("%lf 1",res);
else if (count<2) printf("%lf 0",res);
 return EXIT_SUCCESS;
}
