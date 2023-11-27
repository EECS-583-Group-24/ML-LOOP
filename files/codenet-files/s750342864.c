#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    double a,b,x,y;
    scanf("%lf %lf %lf %lf",&a,&b,&x,&y);
    if(a==b)
    {
        if(x==0&&y==0)
        {
            double d=0.0;
            printf("%0.6lf 0\n",d);
            return 0;
        }
        else if(x==a/2.0&&y==a/2.0)
        {
            printf("%0.6lf 1\n",(a*b)/2);
            return 0;
        }
        else{
        printf("%0.6lf 0\n",(a*b)/2);
        return 0;
        }
    }
    else
    {
        if(x==0&&y==0)
        {
            double d=0.0;
            printf("%0.6lf 0\n",d);
            return 0;
        }
        else if(x==a/2.0&&y==a/2.0)
        {
            printf("%0.6lf 1\n",(a*b)/2);
            return 0;
        }
        else{
        printf("%0.6lf 0\n",(a*b)/2);
        return 0;
        }
    }
    return 0;
}