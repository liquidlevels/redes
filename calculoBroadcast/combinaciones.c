#include <stdio.h>
#include <math.h>
double combinaciones(double bits_prestados){
	//double n = bits_prestados;
	double comb = pow(bits_prestados, 2);
	
	

	return comb;
}

int main(){
	printf("combinaciones: %0.0lf\n\n", combinaciones(2));
	return 0;
}
