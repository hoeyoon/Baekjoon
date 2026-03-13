#include <stdio.h>
int main(){
	int x, sum = 1;;
	scanf("%d", &x);
	for(int i = 1; i <= x;i++){
		sum *= i;
	}
	printf("%d\n", sum);
	return 0;
}