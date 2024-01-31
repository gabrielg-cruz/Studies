#include <stdio.h>

int main(){
	int cod,cod2, qtd,qtd2;
	float valor, valor2, tot;
	
	scanf ("%d %d %f", &cod, &qtd, &valor);
	fflush(stdin);
	scanf ("%d %d %f", &cod2, &qtd2, &valor2);
	
	tot = (qtd * valor) + (qtd2 * valor2);

	printf ("VALOR A PAGAR: R$ %.2f\n", tot);
	
	return 0;
}
