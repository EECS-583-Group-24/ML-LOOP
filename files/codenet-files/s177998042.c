#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
     double w,h,x,y;
    scanf("%lf%lf%lf%lf",&w,&h,&x,&y);
   // cout<<(w-x)*h<<" "<<(h-y)*w;
    if((long long int)((w-x)*h*1000000)==(long long int)((h-y)*w*1000000))
    {
        printf("%1.6lf 1",((double)(w-x)*h));
    }
    else if((long long int)((w-x)*h*1000000)>(long long int)((h-y)*w*1000000))
      //  cout<<(w-x)*h;
        printf("%.6lf 0",(w-x)*h);
    else
      // cout<<(h-y)*w;
        printf("%.6lf 0",(h-y)*w);
    return 0;
}
