#include <stdio.h>

int main(){
  int n;
  scanf("%d\n",&n);
  //
  if(n==2){
    n = 0;
    printf("%d",n);
    return 0;
  }
  //
  int m = n/2;
  int array1[m][2];
  int array2[m][2];
  for(int i=0;i<m;i++){
    array1[i][0] = 0;
    array2[i][0] = 0;
  }
  int x;
  int last1 = 0;
  int last2 = 0;
  scanf("%d%*c",&x);
  array1[0][0] = x;
  array1[0][1] = 1;
  scanf("%d%*c",&x);
  array2[0][0] = x;
  array2[0][1] = 1;
  //
  int j,k;
  for(int i=2;i<n;i++){
    scanf("%d%*c",&x);
    j = 0;
    k = i%2;
    while(1){
      if(k==0){
	if(array1[j][0] == 0){
	  array1[j][0] = x;
	  array1[j][1] = 1;
	  last1++;
	  break;
	}else if(array1[j][0] == x){
	  array1[j][1] += 1;
	  break;
	}else{
	  j++;
	}
      }else{
	if(array2[j][0] == 0){
	  array2[j][0] = x;
	  array2[j][1] = 1;
	  last2++;
	  break;
	}else if(array2[j][0] == x){
	  array2[j][1] += 1;
	  break;
	}else{
	  j++;
	}
      }
    }
  }
  //
  if(array1[0][0]==array2[0][0] && last1==0 && last2==0){
    m = n/2;
    printf("%d",m);
    return 0;
  }
  //
  int answer,max,amount,count;
  answer = 0;
  max = array1[0][1];
  amount = array1[0][1];
  count = 1;
  while(last1){
    if(max < array1[count][1]){
      max = array1[count][1];
      answer += amount;
      amount = array1[count][1];
      count++;
      last1--;
    }else{
      answer += array1[count][1];
      count++;
      last1--;
    }
  }
  max = array2[0][1];
  amount = array2[0][1];
  count = 1;
  while(last2){
    if(max < array2[count][1]){
      max = array2[count][1];
      answer += amount;
      amount = array2[count][1];
      count++;
      last2--;
    }else{
      answer += array2[count][1];
      count++;
      last2--;
    }
  }
  printf("%d",answer);
  return 0;
}