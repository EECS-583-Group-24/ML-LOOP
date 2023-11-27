#include <stdio.h>
int main(){
	int i, N, ary[256];

	scanf( "%d", &N );
	for( i=0; i<N; i++ )
	scanf( "%d", &ary[i] );

	for( i=N; i--; ){
	if(i) printf("\n");
	printf( "%d", ary[i] );


	return 0;
}