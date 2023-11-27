int main(){
  int w, h, x, y;
  scanf("%d%d%d%d", &w, &h, &x, &y);
  printf("%d.%d %d\n", w*h/2, w*h%2*5, w==x*2&&h==y*2);
}