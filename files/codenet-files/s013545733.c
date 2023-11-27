#include<stdio.h>

int main()
{
  int n;
  int fir = 0, sec = 0;
  int cnt = 0;
  int a[200000];
  
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);
  
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      fir = a[i];
      continue;
    }
    if (a[i] > fir)
    {
      sec = fir; fir = a[i];
      continue;
    }
    if (fir >= a[i] && a[i] > sec)
    {
      sec = a[i];
      continue;
    }
  }
  
  for (int i = 0; i < n; i++) if (a[i] == fir) cnt++;
  if (cnt >= 2)
  {
    for (int i = 0; i < n; i++) printf("%d\n", fir);
    return 0;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (a[i] == fir) printf("%d\n", sec);
      else printf("%d\n", fir);
    }
    return 0;
  }
}