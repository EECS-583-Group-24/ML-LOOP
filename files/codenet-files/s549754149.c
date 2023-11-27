int main(void)
{
int n,i,max=0,j=0,second=0,num;
  
  scanf("%d",&n);
  int f[n];
  for(i=0; i<n; i++)
    scanf("%d",&f[i]);
  
  for(i=0; i<n; i++){
    j++;
	if(max <= f[i]) {
      max = f[i];
      num = i;
      j=0;
    }
  }
  if(j==1){
    for(i=0; i<n; i++){
	if((max > f[i]) && (second < f[i])){ 
      second = f[i];
    }
    }
    for(i=0; i<n; i++){
      if(i == num)   {
        printf("%d\n",second);
      }
      else{
        printf("%d\n",max);
      }
    }
  }
  if(j==0){
for(i=0; i<n; i++)
      printf("%d",max);
  }
if(j>=2){
    for(i=0; i<n; i++)
      printf("%d",max);
}
  return 0;
}