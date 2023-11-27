#include<stdio.h>
int main(){

  int n;
  scanf("%d", &n);

  int i,day[ n ];
  for ( i = 0 ; i < n ; i++ ){
    scanf("%d", &day[ i ]);
  }

  for ( i = 0 ; i < n ; i++ ){
    if ( i == n - 1 ) printf("%d", day[ 0 ] );
    else printf("%d ", day[ n - 1 - i ]);
  }

  printf("\n");

  return 0;
  
}