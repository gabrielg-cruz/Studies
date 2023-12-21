#include <stdio.h>

int main(){
	int n, i;
	int maior = 0;
	int pos = 0;
	
	for(i = 0;i <= 100; i++){
	scanf("%d", &n);
	if(n > maior){
		maior = n;
		pos = i;
	}
	}
	
	printf("%d\n", maior);
	printf("%d\n", pos);
	
	return 0;
}
