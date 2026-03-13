#include <stdio.h>
#include <string.h>

int main(){
  char str1[1000001];
  char str2[1000001];

  scanf("%s", str1);
  scanf("%s", str2);
  if(strstr(str1, str2)){
    printf("1\n");
  }
  else{
    printf("0\n");
  }
  return 0;
}