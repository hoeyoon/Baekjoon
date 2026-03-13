#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int count = n;
  char str[101];
  for(int i = 0; i < n; i++){
    char first = '0';
    int apb[26] = {0, };
    scanf("%s", str);
    char *p = str;
    while(*p != '\0'){
      if(first != *p){
        first = *p;
        apb[*p - 'a']++;
      }
      if(apb[*p - 'a'] == 2){
        count--;
        break;
      }
      p++;
    }
  }
  printf("%d\n", count);
  return 0;
}