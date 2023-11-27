#include <stdio.h>

int main(int argc, char const *argv[]) {
 int N;
 int A[200000];
 int m=0;
 int m1;
 int m2;

 scanf("%d\n",&N );
 for (int i = 0; i < N; i++) {
   scanf("%d\n",&A[i] );
 }



 for (int i = 0; i < N; i++) {
   if(m<A[i]){
     m=A[i];
     m1=i;
   }
 }
 m=0;

 for (int i = 0; i < N; i++) {
   if(i!=m1){
     if(m<=A[i]){
       m2=i;
     }
   }
 }

 for (int i = 0; i < N; i++) {
   if(i!=m1){
     printf("%d\n",A[m1] );
   }else{
     printf("%d\n",A[m2] );
   }
 }
  return 0;
}
