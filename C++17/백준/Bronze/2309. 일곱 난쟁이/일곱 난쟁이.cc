#include <stdio.h>

int main(){
  int k[9];
  int total = 0;
  for(int i = 0; i < 9; i++){
    scanf("%d", &k[i]);
    total += k[i];
  }
  int over = total - 100;

  int p, q;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      if((k[i] + k[j]) == over){
        p = i;
        q = j;
        break;
      }
    }
  }
  int r_k[7];
  int a = 0;
  for(int i = 0; i < 9; i++){
    if(i != p && i != q){
      r_k[a] = k[i];
      a++;
    }
  }
  int tmp;
  for(int i = 0; i < 7; i++){
    for(int j = 0; j < 7; j++){
      if(r_k[i] < r_k[j]){
        tmp = r_k[i];
        r_k[i] = r_k[j];
        r_k[j] = tmp;
      }
    }
  }
  for(int i = 0; i < 7; i++){
    printf("%d\n", r_k[i]);
  }
  return 0;
}