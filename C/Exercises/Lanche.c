#include <stdio.h>

int main(){
	int cod, qtd;
	double total;
	
	scanf ("%d", &cod);
	scanf ("%d", &qtd);
	
	switch (cod){
		case 1: total =	4.00 * qtd; break;
		
		case 2: total =	4.50 * qtd; break;
		
		case 3: total =	5.00 * qtd; break;
		
		case 4: total =	2.00 * qtd; break;
		
		case 5: total =	1.50 * qtd; break;
	}

	printf ("Total: R$ %.2lf\n", total);

	return 0;
}
