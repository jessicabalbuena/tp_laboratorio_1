#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/** \brief Funcion que retorna una suma de 2 variables
 *
 * \param float Pide el primer operando
 * \param float Pide el segundo operando
 * \return Retorna la suma entre los dos valores ingresados
 *
 */
float resultadoSuma (float,float);
/** \brief Funcion que devuelve una resta enrte dos variables
 *
 * \param float Pide ingresar el primer operando
 * \param float Pide ingresar el segundo operando
 * \return Retorna la resta entre los dos valores ingresados
 *
 */
float resultadoResta (float, float);
/** \brief Funcion que devuelve una multiplicacion entre dos variables
 *
 * \param float Pide ingresar el primer operando
 * \param float Pide ingresar el segundo operando
 * \return Retorna la multiplicacion entre los dos valores ingresados
 *
 */
float resultadoMultiplicacion (float, float);
/** \brief Funcion que devuelve una division entre dos variables y muestra error si el segundo operando ingresado es 0(cero)
 *
 * \param float Pide ingresar el primer operando
 * \param float Pide ingresar el segundo operando
 * \return Retorna la division entre los dos valores ingresados
 *
 */
float resultadoDivision (float, float);
/** \brief Funcion que realiza el factorial de un numero entero
 *
 * \param int valor de número ingresado
 * \return Return factorial de número ingresado tanto A como B
 *
 */
unsigned long int factorial(int a);

#endif /* FUNCIONES_H_ */
