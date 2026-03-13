#include <stdio.h>

int main(){
  char str[16];
  scanf("%s", str);
  int time = 2;
  int i = 0;
  int result = 0;
  while(str[i] != '\0'){
    time = 2;
    if('A' <= str[i] && str[i] <= 'C'){
      time+=1;
      result += time;
    }
    else if('D' <= str[i] && str[i] <= 'F'){
      time+=2;
      result += time;
    }
    else if('G' <= str[i] && str[i] <= 'I'){
      time+=3;
      result += time;
    }
    else if('J' <= str[i] && str[i] <= 'L'){
      time+=4;
      result += time;
    }
    else if('M' <= str[i] && str[i] <= 'O'){
      time+=5;
      result += time;
    }
    else if('P' <= str[i] && str[i] <= 'S'){
      time+=6;
      result += time;
    }
    else if('T' <= str[i] && str[i] <= 'V'){
      time+=7;
      result += time;
    }
    else if('W' <= str[i] && str[i] <= 'Z'){
      time+=8;
      result += time;
    }
    i++;
  }
  printf("%d\n", result);
  return 0;
}