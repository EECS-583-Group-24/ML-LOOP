// abc134c: Exception Handling
#include <stdio.h>

#define rep(i,s,e) for(int i=s;i<e;i++)
#define in(n) scanf("%d",n)
#define outi(d) printf("%d\n",d)

int main(){
  int n;in(&n);
  int ix=-1,f=0,s=0;
  rep(i,0,n){
    int a;in(&a);
    if(a>f){ s=f; f=a; ix=i; }
    else if(a>s) s=a;
  }
  rep(i,0,n) outi(i==ix? s: f);
  return 0;
}