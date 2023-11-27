#include <stdio.h>

int main()
{
int width;
int height;
int x,y;
scanf("%d",&width);
scanf("%d",&height);
scanf("%d",&x);
scanf("%d",&y);

double max = (double)width* height/2;
printf("%f",max);
printf(" ");
if(x*2 == width && y*2 == height){
printf("%d",1);
}else{
    printf("%d",0);
}

}
