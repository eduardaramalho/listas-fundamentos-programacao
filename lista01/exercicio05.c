#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	float num;
	
	printf("Numero com cinco casas decimais: ");
	scanf("%f", &num);

	printf("Numero com duas casas decimai: %.2f", num);
	return 0;
}
