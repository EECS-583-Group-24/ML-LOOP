int main(){
    int A;
    int temp;
    scanf("%d",&A);
    
    if(A/100==1) temp=900;
    if(A/100==9) temp=100;
  
    if(A/10%10==1) temp=temp+90;
    if(A/10%10==9) temp=temp+10;
  
    if(A%10%10==1) temp=temp+9;
    if(A%10%10==9) temp=temp+1;
  
    printf("%d\n",(temp));  
    return 0;
}