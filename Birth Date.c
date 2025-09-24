#include <stdio.h>


int main() {

	int dia, mes, any;

	printf("Quin dia vas neixer ");
	scanf_s("%d", &dia);
	while (dia > 31 || dia < 1) { //assegurem que el dia sigui valid
		printf("Aquest dia no es valid");
		printf("Quin dia vas neixer ");
		scanf_s("%d", &dia);
	}

	printf("Quin mes vas neixer "); 
	scanf_s("%d", &mes);

	while (mes > 13 || mes < 1) { //assegurem que el mes sigui valid
		printf("Aquest mes no es valid");
		printf("Quin mes vas neixer ");
		scanf_s("%d", &mes);
	}

	printf("Quin any vas neixer");
	scanf_s("%d", &any);

	while (any > 2025) { //assegurem que el any sigui valid
		printf("Aquest any no es valid");
		printf("Quin any vas neixer ");
		scanf_s("%d", &any);
	}

	int suma = dia + mes + any;

	printf("%d+%d+%d=%d", dia, mes, any, suma);


}
