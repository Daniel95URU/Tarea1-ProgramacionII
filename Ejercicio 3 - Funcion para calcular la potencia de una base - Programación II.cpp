/*Escriba una funci�n nombrada funcPotencia() la cual recibir� dos par�metros, primero un numero  ENTERO que ser� la base de la potencia, y
el segundo par�metro de la funci�n ser� el exponente , el valor de retorno ser� la potencia de dicho n�mero.*/

#include <stdio.h>
#include <math.h>

int funcPotencia(int base, int exponente);

main() {
	
int entero, potencia;

printf("Bienvenido, este programa busca calcular la potencia de un numero.\n");
printf("El primer numero que ingreses sera la BASE, el segundo sera el EXPONENTE\n");


printf("El resultado es: %d", funcPotencia(entero, potencia));

return 0;
}

int funcPotencia(int base, int exponente) {
	
int potencia, numEntero, numPotencia;

printf("\nIngresa el numero base: ");
scanf("%d", &numEntero);
printf("\nIngresa el exponente: ");
scanf("%d", &numPotencia);

potencia = pow(numEntero, numPotencia); 

return potencia;
}
