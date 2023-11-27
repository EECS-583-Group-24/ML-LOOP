#include <stdio.h>
int main(){
  float a,b,c,d,check,check2,other,other2,ans,ans2=0;
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  scanf("%f",&d);
  
  check = (a-c)*b;
  other = a*b-check;
  check2 = (b-d)*a;
  other2 = a*b-check2;
  
  if(check>=other){
    check = other;
  }
  if(check2>=other2){
    check2 = other2;
  }
  
  if(check<check2){
    ans = check2;
  }
  if(check>check2){
    ans = check;
  }
  
  if(check==check2){
    ans = check;
    ans2 = 1;
  }
  if(a==c && b==d){
    ans=0;
  }
  if(a==c && b==0){
    ans=0;
  }
  if(a==0 && b==d){
    ans=0;
  }
  if(a==0 && b==0){
    ans=0;
  }
  
  
  
  
  printf("%f %f",ans,ans2);
  return 0;
}
    
    
    
  
  

