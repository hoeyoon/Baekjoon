#include <stdio.h>

int main(){
  char x[100];
  float score;

  scanf("%s", x);
  int i = 0;
  while(x[i] != '\0'){
    if(x[0] == 'A'){
      if(x[1] == '+'){
        score = 4.3;
      }
      else if(x[1] == '0'){
        score = 4.0;
      }
      else if(x[1] == '-'){
        score = 3.7;
      }
    }
    if(x[0] == 'B'){
      if(x[1] == '+'){
        score = 3.3;
      }
      else if(x[1] == '0'){
        score = 3.0;
      }
      else if(x[1] == '-'){
        score = 2.7;
      }
    }
    if(x[0] == 'C'){
      if(x[1] == '+'){
        score = 2.3;
      }
      else if(x[1] == '0'){
        score = 2.0;
      }
      else if(x[1] == '-'){
        score = 1.7;
      }
    }
    if(x[0] == 'D'){
      if(x[1] == '+'){
        score = 1.3;
      }
      else if(x[1] == '0'){
        score = 1.0;
      }
      else if(x[1] == '-'){
        score = 0.7;
      }
    }
    if(x[0] == 'F'){
      score = 0.0;
    }
    i++;
  }
  printf("%.1f\n", score);
  return 0;
}