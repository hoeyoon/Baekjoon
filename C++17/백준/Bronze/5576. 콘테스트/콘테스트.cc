#include <stdio.h>

void sort(int *a){
  for(int i = 0; i < 10; i++){
    for(int j = 0 ; j < 10; j++){
      if(a[i] < a[j]){
        int temp  = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main(){
  int w_u[10];
  int k_u[10];
  for(int i = 0; i < 10; i++){
    scanf("%d", &w_u[i]);
  }
  for(int i = 0; i < 10; i++){
    scanf("%d", &k_u[i]);
  }
  sort(w_u);
  sort(k_u);
  printf("%d %d\n", (w_u[9] + w_u[8] + w_u[7]), (k_u[9] + k_u[8] + k_u[7]));
  
  return 0;
}