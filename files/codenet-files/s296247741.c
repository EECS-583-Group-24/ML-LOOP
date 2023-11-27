#include<stdio.h>
double dientich(int a, int b){
    double s=a*b;
    return s;
}

int main(){
    int W,H,x,y;
    scanf("%d", &W);
    scanf("%d", &H);
    scanf("%d", &x);
    scanf("%d", &y);
    int a,b;
    double s1,s11,s2,s21,S,s;
    a=W-x;
    b=H-y;
    if(x==0||y==0){
        if(x==0){
            if(b>=y) S=dientich(y,W);
            else S=dientich(b,W);
            printf("%lf",S);
            printf("0");
        }else if(y==0)
        {
            if(a>=x) S=dientich(x,H);
            else S=dientich(a,H);
            printf("%lf",S);
            printf("0");
        }
        
        
    }
    else{
    s1=dientich(x,H);
    
    s11=dientich(a,H);
    if(s1>s11)S=s11;
    else S=s1;
    
   
    s2=dientich(y,W);
    s21=dientich(b,W);
    if(s2>s21)s=s21;
    else s=s2;
    if(S>=s)printf("%lf ",S);
    else printf("%lf ",s);
    if(S==s)printf("1");
    else printf("0");
    }
    return 0;    
}