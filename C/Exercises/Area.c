#include <stdio.h>

int main (){
	double a, b, c;
	double areaTRIAN, areaCIRC, areaTRAP, areaQUAD, areaRET;
	
	scanf ("%lf", &a);
	scanf ("%lf", &b);
	scanf ("%lf", &c);
	
	areaTRIAN = (a * c) / 2;
	areaCIRC  = (c * c) * 3.14159;
	areaTRAP  = ((a + b) * c) / 2;
	areaQUAD  = b * b;
	areaRET   = a * b;
	
	printf ("TRIANGULO: %.3lf\n", areaTRIAN);
	printf ("CIRCULO: %.3lf\n", areaCIRC);
	printf ("TRAPEZIO: %.3lf\n", areaTRAP);
	printf ("QUADRADO: %.3lf\n", areaQUAD);
	printf ("RETANGULO: %.3lf\n", areaRET);
	
	return 0;
}
