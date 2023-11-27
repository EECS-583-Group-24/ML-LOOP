int main(){
char c[3],ans[4];
  scanf("%s",&c);
  ans[0]=0;
  ans[1]=0;
  ans[2]=0;
  ans[3]=0;
  
  if(c[0]=='1')ans[0]='9';
  if(c[1]=='1')ans[1]='9';
  if(c[2]=='1')ans[2]='9';
  if(c[0]=='9')ans[0]='1';
  if(c[1]=='9')ans[1]='1';
  if(c[2]=='9')ans[2]='1';
  printf("%s",ans);
}