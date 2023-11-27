int main() {
  int x, y, z;

  scanf("%d%d", &x, &y);

  if(x < y){
    z = x;
    x = y;
    y = z;
  }

  for(;y != 0;){
    z = y;
    y = x % y;
    x = z;
  }

  printf("%d\n", x);
    

  return 0;
}