#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	float raio;
	float total;
	
	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	
	total = 3.14 * pow(raio, 2);
	
	printf("%.2f", total);
	return 0;
}
