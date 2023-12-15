#include <stdio.h>

int main (){
	int num, horas;
	float salHora, salario;
	
	scanf ("%d", &num);
	scanf ("%d", &horas);
	scanf ("%f", &salHora);
	
	salario = salHora * horas;
	
	printf ("NUMBER = %d\n", num);
	printf ("SALARY = U$ %.2f", salario);
}
