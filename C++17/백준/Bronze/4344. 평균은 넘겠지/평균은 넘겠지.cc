#include <stdio.h>

int main(){
  int c;
  scanf("%d", &c);
  int s[1000];
  for(int i = 0; i < c; i++){
    int n;
    scanf("%d", &n);
    double sum = 0;
    for(int i = 0; i < n; i++){
      scanf("%d", &s[i]);
      sum += s[i];
    }
    int avg = sum / n;
    double count = 0;
    for(int i = 0; i < n; i++){
      if(avg < s[i]){
        count += 1;
      }
    }
    printf("%0.3lf%%\n", (count / n) * 100);
  }
  return 0;
}