// toy.c
#include <stdio.h>
#define SIZE 200


void never_executed(){
printf("Should Not Be Printed!\n");
}

int iAdd(int a, int b){
return a+b;
}

float fAdd(float a, float b){
return a+b;
}


int main(){
int A[SIZE] = {0};
int B[SIZE] = {1};
float C[SIZE] = {0.1};
float D[SIZE] = {3.2};

for(int i=0;i<SIZE;i++){
if (i < SIZE*0.8){
D[i] = fAdd(C[i], D[i]);
}

if( i < SIZE*0.3){
B[i] = iAdd(A[i], B[i]);
}
}

return 0;
}