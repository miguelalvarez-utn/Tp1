#include <stdio.h>
#include <stdlib.h>
#include "Prototipos.h"
int main()
{
    int a;
    int b;
    int totalSuma;
    int totalResta;
    int totalMultiplicacion;
    float totalDivision;
    int factorialA;
    int factorialB;
    int opcion;
    int flag = 0;
    int flag2 = 0;
    int flag3 = 0;

    do
    {
        printf("\t\t------------------Calculadora--------------------\n");
        printf("Elija una opcion de 1-5:\n");
        printf("1.Ingresar 1er operador\n2.Ingresar 2do operador\n");
        printf("3.Calcular todas la operaciones:\n a)Suma(A+B)\n b)");
        printf("Resta(A-B)\n c)Multiplicacion(A*B)\n d)Division(A/B)\n e)Factorial de: A y B\n");
        printf("4.Informar todos los resultados:\n5.Salir\n");
        scanf("%d",&opcion);
        system("cls");
        opcion = opcionValida(opcion,5,1,"Error!! opcion invalida\n");
        switch(opcion)
        {
            case 1:
                printf("Ingrese 1do operador: ");
                scanf("%d",&a);
                flag = 1;
                break;
            case 2:
                printf("Ingrese 2do operador: ");
                scanf("%d",&b);
                flag2 = 1;
                break;
            case 3:
                if(flag == 1 && flag2 == 1)
                {
                    totalSuma = suma(a,b);
                    totalResta = resta(a,b);
                    totalMultiplicacion = multiplicacion(a,b);
                    system("cls");
                    totalDivision = division(a,b,"Error en la division, ya que no se puede devidir por 0 \n");
                    factorialA = factorialNumeroA(a,"Error en el factorial del 1er operador, ya que es 0 o negativo\n");
                    factorialB = factorialNumeroB(b,"Error en el factorial del 2do operador, ya que es 0 o negativo\n");
                    flag3 = 1;
                }
                else
                {
                    system("cls");
                    printf("Error, no se ingreso alguno de los operadores");
                }

                break;
            case 4:
                if(flag == 1 && flag2 == 1 && flag3 == 1)
                {
                    printf("El total de %d + %d = %d\n",a,b,totalSuma);
                    printf("El total de %d - %d = %d\n",a,b,totalResta);
                    printf("El total de %d * %d = %d\n",a,b,totalMultiplicacion);
                    printf("El total de %d / %d = %.2f\n",a,b,totalDivision);
                    printf("El factorial de %d = %d\n",a,factorialA);
                    printf("El factorial de %d = %d\n",b,factorialB);
                }
                else
                {
                    system("cls");
                    printf("No es posible ver los resultados sino se ingresaron operadores");
                }
                break;
        }
    }while(opcion != 5);
}
