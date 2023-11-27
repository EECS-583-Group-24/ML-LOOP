#include <stdio.h>
int main(){
  int x,y,smo,big,arr;
  scanf("%d,%d",&x,&y);
  if(x>=y){
    smo=y;
    big=x;
  }
    else{
      smo=x;
      big=y;
    }
    while(1){
      arr=big%smo;
      if(arr=0)break;
      smo=big;
      arr=smo;
    }
    printf("%d\n",smo);
    return 0;
}