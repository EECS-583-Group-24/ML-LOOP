#include <stdio.h>

#define SIZE 1500


void recursion(int depth) {
  if(depth == 0) {
    return;
  }
  recursion(depth-1);
}

int main()
{
  int i = 5;
  recursion(i);
}

