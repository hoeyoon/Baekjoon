#include <stdio.h>

int main(){
	int a[10000];
	int x, y;
	scanf("%d %d", &x, &y);
	
	for(int i = 0; i < x; i++){
		scanf("%d", &a[i]);
		if(a[i] < y){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	
	return 0;
}