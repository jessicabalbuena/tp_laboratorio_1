#include "funciones.h"

float resultadoSuma (float A, float B) //funcion que realiza una suma
{
	float suma;

	suma = A + B;

	return suma;
}

float resultadoResta (float A, float B) //funcion que realiza una resta
{
	float resta;

	resta = A - B;

	return resta;
}

float resultadoDivision (float A, float B) //funcion que realiza una division
{
	float division;

	division = A / B;

	return division;
}

float resultadoMultiplicacion (float A, float B)//funcion que realiza una multiplicacion
{
	float multiplicacion;

	multiplicacion = A * B;

	return multiplicacion;
}

unsigned long int factorial(int a) //funcion que realiza el factorial de ambos numeros
{
    unsigned long int resFactorial;
    while(a>=1)
    {
        if(a==1)
            return 1;
        resFactorial=a* factorial(a-1);
        return (resFactorial);
    }
    return 0;
}
