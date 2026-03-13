#include <stdio.h>

int main(){
  char str[101];
  scanf("%s", str);
  int count = 0;
  int a[5] = {'a', 'e', 'i', 'o', 'u'};
  int i = 0;
  while(str[i] != '\0'){
    for(int j = 0; j < 5; j++){
      if(str[i] == a[j]){
        count++;
      }
    }
    i++;
  }
  printf("%d\n", count);
  return 0;
}