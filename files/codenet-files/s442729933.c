#include<stdio.h>
int sq(int w,int h,int x,int y,int n){
  if(n){
    if(x<w/2)
      return h*x;
    else
      return h*(w-x);
  }else{
    if(y<h/2)
      return w*y;
    else
      return w*(h-y);
  }
}

double cut(int w,int h,int x,int y,int n){
  int tx=x,ty=y;
  double over=0;
  if(n){
    while(ty!=0){ x--; ty--; }
    while(tx!=w){ y++; tx++; }
    if(x<0){
      over += (double)x*x/2;
      if(y>h)
        over += (double)(y-h)*(y-h)/2;
    }
    if((w-x)*y<h*w)
      return (double)((w-x)*y/2)-over;
    else
      return (double)(h*w-(w-x)*y/2)+over;
  }else{
    while(ty!=h){ x++; ty++; }
    while(tx!=0){ y--; tx--; }
    if(x>w){
      over += (double)(x-w)*(x-w)/2;
      if(y<0)
        over += (double)y*y/2;
    }
    if(x*(h-y)<h*w)
      return (double)(x*(h-y)/2)-over;
    else
      return (double)(h*w-x*(h-y)/2)+over;
  }
}

int main(){
  int w,h;
  int x,y;
  double squ,tri;
  scanf("%d %d %d %d",&w,&h,&x,&y);

  if(x==0 || y==0 || x==w || y==h){
    printf("0.000000 1\n");
    return 0;
  }

  if(sq(w,h,x,y,1)>sq(w,h,x,y,0))
    squ = sq(w,h,x,y,1);
  else
    squ = sq(w,h,x,y,0);

  if(cut(w,h,x,y,1)>cut(w,h,x,y,0))
    tri = cut(w,h,x,y,1);
  else
    tri = cut(w,h,x,y,0);

  if(squ==tri)
    printf("%f 1\n",squ);
  else if(squ>tri)
    printf("%f 0\n",squ);
  else
    printf("%f 0\n",tri);

  return 0;
}