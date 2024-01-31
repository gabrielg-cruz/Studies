#include <stdio.h>

int main(){
	double salario, vendas;
	char nome[30];
	
	scanf ("%s", &nome);
	scanf ("%lf", &salario);
	scanf ("%lf", &vendas);

	double total = salario + (vendas * 0.15);
	
	printf ("TOTAL = R$ %.2lf", total);
	return 0;
}
