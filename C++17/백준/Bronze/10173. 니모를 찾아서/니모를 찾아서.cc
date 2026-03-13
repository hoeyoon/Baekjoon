#include <stdio.h>
#include <string.h>

int find(char *str){
  char *p1 = str;
  char *p2 = str + 1;
  char *p3 = str + 2;
  char *p4 = str + 3;
  while(*p4 != '\0'){
    if((*p1 == 'n' || *p1 == 'N') && (*p2 == 'e' || *p2 == 'E') && (*p3 == 'm' || *p3 == 'M') && (*p4 == 'o' || *p4 == 'O')){
      return 1;
    }
    p1++;
    p2++;
    p3++;
    p4++;
  }
  return 0;
}

int main() {
  char str[81];
  while (1) {
    scanf("%[^\n]s", str);
    if (strcmp(str, "EOI") == 0) {
      break;
    }
    if (find(str) == 1) {
      printf("Found\n");
    } else {
      printf("Missing\n");
    }
    getchar();
  }
  return 0;
}