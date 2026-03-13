#include <stdio.h>

int main(){
  char subject[51];
  double credit;
  char grade[3];
  
  double sumcredit = 0;
  double result = 0;
  double temp;
  for(int i = 0; i < 20; i++){
    scanf("%s %lf %s", subject, &credit, grade);
    if(grade[0] == 'P'){
      continue;
    }
    sumcredit += credit; 
    if(grade[0] == 'F'){
      continue;
    }
    if(grade[0] == 'A'){
      temp = 4;
    }
    else if(grade[0] == 'B'){
      temp = 3;
    }
    else if(grade[0] == 'C'){
      temp = 2;
    }
    else if(grade[0] == 'D'){
      temp = 1;
    }
    if(grade[1] == '+'){
      temp += 0.5;
    }
    result += credit * temp;
  }
  printf("%lf\n", result/ sumcredit);
  return 0;
}