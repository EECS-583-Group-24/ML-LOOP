int main(void){
 int n;
 int a;
 int i;
 int array[101];
 
 scanf("%d",&n);
 
 for(i=0;i<n;i++){
  scanf("%d",&a);
  from[i] = a;
 }

 for(i=0;i<n;i++){
  to[i] = from[(n-1)-i];
 }

 
 for(i=0;i<n;i++){
  if(i == n-1){
   printf("%d\n",to[i]);
  }else{
   printf("%d ",to[i]);
  }
 }
 return 0;
}