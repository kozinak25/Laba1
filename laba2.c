#include <stdio.h>

void bin(int n){
	if (n > 1){
		bin(n / 2);
	}
	printf("%d", n%2);
}

int main(){
	int n;
	if (scanf("%d", &n) !=1 || n<=0){
		return 1;
	}
	bin(n);
	printf("\n");
	return 0;
}

