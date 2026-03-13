#include <stdio.h>

int main(){
  int t;
  int h, w, n;

  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    scanf("%d %d %d", &h, &w, &n);
    int floor = n % h;
    int room = n / h;

    if(floor == 0){
      printf("%d\n", h * 100 + room);
    }
    else{
      printf("%d\n", floor * 100 + (room + 1));
    }
  }

  return 0;
}