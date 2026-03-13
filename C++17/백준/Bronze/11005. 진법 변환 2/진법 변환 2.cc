#include <stdio.h>

int main(){
  int n;
  int b;
  scanf("%d %d", &n, &b);

  char str[10001] = {0, };
  int count = 0;
  for(int i = n; i > 0;){
    if(i % b < 10){
      str[count++] = i % b + '0';
    }
    else{
      str[count++] = i % b + '7';
    }
    i /= b;
  }
  for (int j = count-1; j >= 0; j--) {
      printf("%c", str[j]);
  }
  return 0;
}