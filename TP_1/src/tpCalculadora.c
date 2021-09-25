/*
 ============================================================================
 Name        : tpCalculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {

	setbuf(stdout, NULL);

	float primerOperando = 0;
	float segundoOperando = 0;
	int opcion, validacionOperaciones = 0;
	float suma=0, resta=0, multiplicacion=0, division = 0;
	int aux;
	unsigned long int resFactorialA, resFactorialB;

	do {
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n   1. Ingresar primero operando.\n");
		printf("\n   2. Ingresar segundo operando.\n");
		printf("\n   3. Calcular todas las operaciones.\n");
		printf("\n   4. Informar resultados.\n");
		printf("\n   5. Salir.\n");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nOpcion:\n");

		scanf("%d", &opcion);

		switch (opcion)
		{
			case 1:
			printf("Ingrese el primer operando:\n");
			fflush(stdin);
			scanf("%f", &primerOperando);
			break;

			case 2:
			printf("Ingrese el segundo operando:\n");
			fflush(stdin);
			scanf("%f", &segundoOperando);
			break;

			case 3:
			suma = resultadoSuma(primerOperando, segundoOperando);
			resta = resultadoResta(primerOperando, segundoOperando);
			multiplicacion = resultadoMultiplicacion(primerOperando,
					segundoOperando);
			division = resultadoDivision(primerOperando, segundoOperando);

			if(primerOperando >= 1 ){
				aux = (int)primerOperando;
				resFactorialA = factorial(aux);
			}else{
				resFactorialA = -1;
			}

			if(segundoOperando >= 1 ){
				aux = (int)segundoOperando;
				resFactorialB = factorial(aux);
			}else{
				resFactorialB = -1;
			}

			validacionOperaciones = 1;

			printf("\nCalculando todas las operaciones\n");

			break;

			case 4:
			if (validacionOperaciones == 1)
				{
					printf("\nEl resultado de la suma es: %.2f", suma);
					printf("\nEl resultado de la resta es: %.2f", resta);
					printf("\nEl resultado de la multiplicacion es: %.2f",
						multiplicacion);
						if (segundoOperando == 0)
						{
							printf("\nOperacion invalida, no se puede dividir por 0.\n");
						} else
						{
							printf("\nEl resultado de la division es: %.2f\n",
							division);
						}

						if(resFactorialA != -1 || resFactorialA > 0){
							printf("\nFactorial de A = %ld", resFactorialA);
						}else{
							printf("\nFactorial de A = Num no valido");
						}

						if(resFactorialB != -1 || resFactorialB > 0){
							printf("\nFactorial de B = %ld\n",resFactorialB);
						}else{
							printf("\nFactorial de B = Num no valido\n");
						}
				}
				else
				{
				printf("\nPrimero tiene que ingresar datos para despues ser mostrados.\n");
				}

			break;

			case 5:
			printf("\nSalir\n");
			break;

			default:
			printf("Por favor, ingrese una opcion valida");
			break;
		}
	} while (opcion != 5);

	return EXIT_SUCCESS;
}


