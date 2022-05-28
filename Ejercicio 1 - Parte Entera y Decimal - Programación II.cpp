#include <stdio.h>

float numero;
int Entero;
float Decimal(void);

main(){

extern float numero;
extern int Entero;

	printf("Ingrese un numero con decimales: ");
	scanf("%f", &numero);
	
	Entero = numero;
	
	printf("La parte entera es %d\n\n", Entero);
	
	printf("La parte decimal es %f\n", Decimal());
	
return 0;

}

float Decimal(void){
	
	float numd;

		numd = numero - Entero;

return numd;

}
