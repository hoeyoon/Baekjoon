#include <stdio.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);

  int a[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  int max = 0;
  int sum = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      for(int k = j + 1; k < n; k++){
        sum = a[i] + a[j] + a[k];
        if(sum > max && sum <= m){
          max = sum;
        }
      }
    }
  }
  printf("%d\n", max);
  return 0;
}