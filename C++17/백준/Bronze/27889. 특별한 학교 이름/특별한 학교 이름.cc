#include <stdio.h>
#include <string.h>

int main(){
  char sch[4][100] = {"North London Collegiate School", "Branksome Hall Asia", "Korea International School", "St. Johnsbury Academy"};

  int idx;
  char str[100];
  scanf("%s", str);
  if(strcmp(str, "NLCS") == 0){
    idx = 0;
  }
  else if(strcmp(str, "BHA") == 0){
    idx = 1;
  }
  else if(strcmp(str, "KIS") == 0){
    idx = 2;
  }
  else if(strcmp(str, "SJA") == 0){
    idx = 3;
  }
  printf("%s\n", sch[idx]);
  return 0;
}