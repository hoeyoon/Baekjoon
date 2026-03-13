#include <stdio.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);

  int a, b, c;
  int arr[100] = {0, };
  for(int i = 0; i < m; i++){
    scanf("%d %d %d", &a, &b, &c);
    for(int j = a; j <= b; j++){
      arr[j - 1] = c;
    } 
  }
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}