int main(){
int a,b,c,d;
scanf("%d %d\n",&a,&b);
for (d=1;d<=b;d++){if ((a%d==0)&&(b%d==0)){c=d;};};
printf("%d\n",c);
return 0;
}