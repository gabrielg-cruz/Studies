#include <stdio.h>

int main(){
	int x, y, i, compar, soma;
	
	
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > y)
	compar = 1;
	
	else if (x < y)
	compar = 2;
	
	if (x == y)
	printf ("%d", soma);
	
	else{
		switch (compar){
			case 1:
			for (i = x - 1; i > y; i--){
				if (i % 2 != 0){
					soma += i;
				}
			}
			break;
		
			case 2:
			for (i = x + 1; i < y; i++){
				if (i % 2 != 0){
					soma += i;
				}
			}
			break;
		}
}
	
	printf ("%d\n", soma);
	
	return 0;
}
