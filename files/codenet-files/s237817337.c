#include <stdio.h>
#include <stdlib.h>

int main(void){
	int w,h,x,y,cnt_x=0,cnt_y=0,flag=0;
	scanf("%d %d %d %d",&w,&h,&x,&y);
	double x_cut1,x_cut2,y_cut1,y_cut2,min_x_cut=-1,min_y_cut=-1;

	x_cut1 = x*h;
	x_cut2 = (w-x)*h;
	if(x_cut1 == x_cut2){
		cnt_x++;
	}
	if(x_cut1 < x_cut2){
		min_x_cut = x_cut1;
	}else{
		min_x_cut = x_cut2;
	}
  
	y_cut1 = y*w;
	y_cut2 = (h-y)*w;
	if(y_cut1 == y_cut2){
		cnt_y++;
	}
	if(y_cut1 < y_cut2){
		min_y_cut = y_cut1;
	}else{
		min_y_cut = y_cut2;
	}
  
	if(cnt_x == cnt_y){
		flag=1;
	}
  
	if(min_x_cut > min_y_cut){
		printf("%lf %d\n",min_x_cut,flag);
	}else{
		printf("%lf %d\n",min_y_cut,flag);
	}
  
	return 0;
}