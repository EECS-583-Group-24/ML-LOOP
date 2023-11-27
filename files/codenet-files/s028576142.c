main(){
  int a,b,c;
  
  scanf("%d%d",&a,&b);
  if(1<a<10^9 && 1<b<10^9){
    while(a%b!=0){
      c=a%b;
      a=b;
      b=c;
    }
  printf("%d\n",b);
  }
  return 0;