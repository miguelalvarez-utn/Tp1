#include <stdio.h>
#include <stdlib.h>
/*
 *Funcion que valida la opcion elegida por el usuario.
 *Recibe un numero entero como opcion ingresada, numero de opcion maximo y minimo.
 *Retorna el contenido del el buffer como opcion valida y 0 si fue invalida.
 */
int opcionValida(int numeroOpcion, int maximo, int minimo, char* mensajeError)
{
    int retorno = -1;
    int buffer;
    if(numeroOpcion >= minimo && numeroOpcion <= maximo)
    {
        buffer = numeroOpcion;
        return buffer;
    }
    printf("%s",mensajeError);
    return retorno;
}

/*
 *Funcion que suma 2 valores enteros(valorA, ValorB).
 *Recibe 2 valores enteros en las variables(valorA, ValorB).
 *Retorna un valor entero como resultado.
 */
int suma (int valorA, int valorB)
{
    int resultado;
    resultado = valorA + valorB;
    return resultado;
}

/*
 *Funcion que resta 2 valores enteros(valorA, ValorB).
 *Recibe 2 valores enteros en las variables(valorA, ValorB).
 *Retorna un valor entero como resultado.
 */
int resta(int valorA, int valorB)
{
    int resultado;
    resultado = valorA - valorB;
    return resultado;
}

/*
 *Funcion que multiplica 2 valores enteros(valorA, ValorB).
 *Recibe 2 valores enteros por parametro en las variables(valorA, ValorB).
 *Retorna un valor entero como resultado.
 */
int multiplicacion(int valorA, int valorB)
{
    int resultado;
    resultado = valorA * valorB;
    return resultado;
}

/*
 *Funcion que divide 2 valores enteros (valorA, valorB).
 *Recibe 2 valores enteros por parametro en las variables(valorA, ValorB).
 *Retorna un valor entero como resultado.
 */
float division(float valorA, float valorB, char* mensajeError)
{
    int retorno = -1;
    if(valorB != 0)
    {
        float resultado;
        resultado = valorA / valorB;
        return resultado;
    }
    printf("%s",mensajeError);
    return retorno;
}

/*
 *Funcion que calcula el factorial de un valor entero(valorA)
 *Recibe un valor entero por parametro en la variable(valorA)
 *Retorna un valor entero asignado en(factorial) en caso de error retorna 0.
*/
int factorialNumeroA(int valorA,char* mensajeError)
{
    int retorno = -1;
    int i = 1;
    int factorial = 1;

    if(valorA >= 1)
    {
        for(i = 1; i <= valorA; i++)
        {
            factorial *= i;
        }

    return factorial;
    }
    printf("%s",mensajeError,valorA);
    return retorno;
}

/*
 *Funcion que calcula el factorial de un valor entero(valorA)
 *Recibe un valor entero por parametro en la variable(valorA)
 *Retorna un valor entero asignado en(factorial) en caso de error retorna 0.
*/
int factorialNumeroB(int valorB, char* mensajeError)
{
    int retorno = -1;
    int i = 1;
    int factorial = 1;

    if(valorB >= 1)
    {
        for(i = 1; i <= valorB; i++)
        {
            factorial *= i;
        }

    return factorial;
    }
    printf("%s",mensajeError,valorB);
    return retorno;
}
