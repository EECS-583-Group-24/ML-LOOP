#include<stdio.h>

int main(void){

    int w,h;
    int x,y;
    float s,skari;
    float square;
    int tori;
    float tates1,tates2,yokos1,yokos2,realyokos,realtates;
    scanf("%d%d%d%d",&w,&h,&x,&y);
    square=(float)w*h;
    tates1=(float)x*h;
    tates2=(float)(w-x)*h;
    yokos1=(float)y*w;
    yokos2=(float)(h-y)*w;

    
    
    if(tates1<tates2)
    realtates=tates1;
    else
    {
        realtates=tates2;
    }
    
    if(yokos1<yokos2){
        realyokos=yokos1;
    }else{
        realyokos=yokos2;
    }
    if(realyokos<realtates){
        skari=realtates;
    }

    //対角線状にあるとき。
    if(w%x==0&&h%y==0){
        s=square/2;
        if(x==w/2){
            tori=1;
        }
        else if(skari==s){
            tori=1;
        }
        else {
            tori=0;
        }
    }
    //対角線滋養にない
    else if(realyokos==realtates){
        s=realyokos;
        tori=1;
    }
    else if(realyokos<realtates){
        s=realtates;
        tori=0;
    }
    else if(realyokos>realtates){
        s=realyokos;
        tori=0;
    }
    
    printf("%f\n",s);
    printf("%d",tori);
    

    return 0;
}