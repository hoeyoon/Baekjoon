#include <stdio.h>

int main(){
  int a;
  char c;
  scanf("%d", &a);

  if(a>=90){
    c = 'A';
  }
  else if(a>=80){
    c = 'B';
  }
  else if(a>=70){
    c = 'C';
  }
  else if(a>=60){
    c = 'D';
  }
  else{
    c = 'F';
  }
  printf("%c", c);
}