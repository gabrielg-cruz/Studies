#include <stdio.h>
#include <math.h>

int main (){
	double r, vol;
	
	scanf("%lf", &r);
	
	vol = (4/3.0) * 3.14159;
	vol = vol * pow (r, 3);
	
	printf ("VOLUME = %.3lf\n", vol);
	
	return 0;
}
