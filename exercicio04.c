#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	float num;
	
	printf("Metros: ");
	scanf("%f", &num);
	
	num = num * 100;
	
	printf("\nCentimetros: %.2f", num);
	return 0;
}
