#include <stdio.h>

int main(){
  float x, y = 0, a[1000];
  scanf("%f", &x);
  for(int i = 0; i < x; i++){
    scanf("%f", &a[i]);
  }
  int avg = 0;
  for(int i = 0; i < x; i++){
    if(avg < a[i]){
      avg = a[i];
    }
  }
  for(int i = 0; i < x; i++){
    y += a[i]/avg*100;
  }
  printf("%f\n", y/x);
  
  return 0;
}