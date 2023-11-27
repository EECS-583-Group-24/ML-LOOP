#include <stdlib.h>
#include <stdio.h>

void Constraints(int n,int a[])
{
  for(int i=0;i<n;i++)
  {
    if(!(0<=a[i]&&a[i]<=1000&&n<=100))
    {
      printf("条件を満たす入力をしてください。\n");
      exit(0);
    }
  }
}

void ScanArray(int n,int a[])
{
  for(int i=0;i<n;i++){scanf("%d",&a[i]);}
}

void Chenger(int n,int a[])
{
  int tmp;
  for(int i=0;i<(n/2);i++)
  {
    int back=n-1-i;
    tmp=a[i];
    a[i]=a[back];
    a[back]=tmp;
  }
}

void PrintArray(int n,int a[])
{
  for(int i=0;i<n;i++){
    printf("%d",a[i]);
    if (i != n-1) {
      printf(" ");
    }
  }
  printf("\n" );
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int a[n];
    ScanArray(n,a);
    Chenger(n,a);
    PrintArray(n,a);
    return 0;
}

