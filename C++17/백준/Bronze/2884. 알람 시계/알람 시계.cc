#include <stdio.h>

int main(){
  int H, M;

  scanf("%d %d", &H, &M);

  if(0 <= H && H <= 23 && 0 <= M && M <= 59){
    if(M > 45){
      M = M - 45;
      if(H == 0){
        H = 0;
      }
    }
    else if(M < 45){
      M = M - 45 + 60;
      if(H == 0){
        H = 23;
      }
      else{
        H-=1;
      }
    }
    else if(M == 45){
      M = 0;
    }
  }

  printf("%d %d", H, M);
  return 0;
}