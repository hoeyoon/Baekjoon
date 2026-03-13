#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if(a == b && b == c){//다 같은 경우
    printf("%d\n", 10000+a*1000);
  }
  
  //다 다른 경우
  if((a < b && b < c) || (b < a && a < c)){
    printf("%d\n", c*100);
  }
  else if((a < c && c < b) || (c < a && a < b)){
    printf("%d\n", b*100);
  }
  else if((b < c && c < a) || c < b && b < a){
    printf("%d\n", a*100);
  }

  //2개만 같은 경우
  if(a == b && c != b && a != c){
    printf("%d\n", 1000+a*100);
  }
  else if(b == c && b != a && c != a){
    printf("%d\n", 1000+b*100);
  }
  else if(a == c && a != b && c != b){
    printf("%d\n", 1000+c*100);
  }
  
  return 0;
}