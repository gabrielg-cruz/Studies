#include <stdio.h>

int main (){
	double a, b, c, perim, area;
	scanf ("%lf", &a);
	scanf ("%lf", &b);
	scanf ("%lf", &c);
	
	if ((a < (b+c)) && (b< (a+c)) && (c < (b+a))){
		perim = a + b + c;
		printf("Perimetro = %.1lf\n", perim);
	}
	
	else{
 		area = (( a + b ) * c ) / 2;
 		printf ("Area = %.1lf\n", area);
	}
	return 0;
}
