#include <stdio.h>
#include <string.h>

int main(){
  char A[10], B[10];
  char temp1, temp2;

  scanf("%s %s", A, B);
  //printf("%s %s\n", A, B);

  temp1 = A[0];
  A[0] = A[2];
  A[2] = temp1;

  temp2 = B[0];
  B[0] = B[2];
  B[2] = temp2;

  if(strcmp(A, B) > 0){
    printf("%s\n", A);
  }
  else{
    printf("%s\n", B);
  }
  
  return 0;
}
