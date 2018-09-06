#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_entradaDeDatos.h"
#include "biblioteca_operacionesMatematicas.h"

int main()
{
    //Variables de opción, operandos y operaciones.
    int opcion;
    float primerOperando;
    float segundoOperando;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    long long int factorialPrimerOperando;
    long long int factorialSegundoOperando;
    // Banderas.
    int banderaPrimerOperando=0;
    int banderaSegundoOperando=0;
    int banderaFactorialUno=0;
    int banderaFactorialDos=0;
    int banderaOperaciones=0;
    // Verificación para cálculo de factorial.
    int verificarEnteroUno;
    int verificarEnteroDos;

    //Menu
    do
    {
        printf("____________________________________________________________________________________________________________\n");

        if (banderaPrimerOperando == 0)
        {
            printf("\n1)Ingresar el primer operando: (A)\n");
        }
        else
        {
            printf("\n1)Ingresar el primer operando: (%0.3f)\n", primerOperando);
        }

        if (banderaSegundoOperando == 0)
        {
            printf("2)Ingresar el segundo operando: (B)\n");
        }
        else
        {
            printf("2)Ingresar el segundo operando: (%0.3f)\n", segundoOperando);
        }
        printf("3)Realizar operaciones.\n");
        printf("4)Informar resultados.\n");
        printf("5)Salir.\n");

        printf("____________________________________________________________________________________________________________\n");

        opcion=seleccionDeOpcion();

        //Selección de opción del menú.
        switch(opcion)
        {
        case 1:
            primerOperando=ingresoNumeroFlotante("\nIngrese el primer operando: ");
            banderaPrimerOperando=1;
            system("cls");
            break;
        case 2:
            segundoOperando=ingresoNumeroFlotante("\nIngrese el segundo operando: ");
            banderaSegundoOperando=1;
            system("cls");
            break;
        case 3:
            if (banderaPrimerOperando == 1 && banderaSegundoOperando == 1)
            {
                banderaOperaciones=1;
                suma = sumarDosFlotantes(primerOperando, segundoOperando);
                resta = restarDosFlotantes(primerOperando, segundoOperando);
                multiplicacion = multiplicarDosFlotantes(primerOperando, segundoOperando);
                if (segundoOperando != 0)
                {
                    division = dividirDosFlotantes(primerOperando, segundoOperando);
                }
                verificarEnteroUno = primerOperando;
                if (primerOperando == verificarEnteroUno && primerOperando >= 0)
                {
                    factorialPrimerOperando = calcularFactorial(primerOperando);
                    banderaFactorialUno=1;
                } else
                {
                    banderaFactorialUno=0;
                }
                verificarEnteroDos = segundoOperando;
                if (segundoOperando == verificarEnteroDos && segundoOperando >= 0)
                {
                    factorialSegundoOperando = calcularFactorial(segundoOperando);
                    banderaFactorialDos=1;
                } else
                {
                    banderaFactorialDos=0;
                }
                system("cls");
            }
            else
            {
                printf("____________________________________________________________________________________________________________\n");
                printf("\nError. Ingrese dos operandos.\n");
            }
            break;
        case 4:
            if (banderaPrimerOperando == 1 && banderaSegundoOperando == 1 && banderaOperaciones == 1)
            {
                printf("____________________________________________________________________________________________________________\n");
                printf("\nEl resultado de %.3f", primerOperando);
                printf("+(%.3f)", segundoOperando);
                printf(" es: %.3f\n", suma);
                printf("El resultado de %.3f", primerOperando);
                printf("-(%.3f)", segundoOperando);
                printf(" es: %.3f\n", resta);
                printf("El resultado de %.3f", primerOperando);
                printf("*(%.3f)", segundoOperando);
                printf(" es: %.3f\n", multiplicacion);
                if (segundoOperando == 0)
                {
                    printf("No es posible dividir por cero.\n");
                }
                else
                {
                    printf("El resultado de %.3f", primerOperando);
                    printf("/(%.3f)", segundoOperando);
                    printf(" es: %.3f\n", division);
                }
                //Permite mostrar el factorial de números iguales o menores que 20.
                if (banderaFactorialUno == 1 && banderaFactorialDos == 1)
                {
                    printf("El factorial de %.3f", primerOperando);
                    printf(" es: %lld", factorialPrimerOperando);
                    printf(" y el factorial de %.3f", segundoOperando);
                    printf(" es: %lld.\n", factorialSegundoOperando);
                }
                else
                {
                    if (banderaFactorialUno == 1 && banderaFactorialDos == 0)
                    {
                        printf("El factorial de %.3f", primerOperando);
                        printf(" es: %lld", factorialPrimerOperando);
                        printf(" y %.3f", segundoOperando);
                        printf(" no tiene factorial porque no es un numero entero positivo.\n");
                    }
                    else
                    {
                        if (banderaFactorialUno == 0 && banderaFactorialDos == 1)
                        {
                            printf("%.3f", primerOperando);
                            printf(" no tiene factorial porque no es un numero entero positivo y el factorial de %.3f", segundoOperando);
                            printf(" es: %lld.\n", factorialSegundoOperando);
                        }
                        else
                        {
                            if(banderaFactorialDos == 0 && banderaFactorialUno == 0)
                            {
                                printf("%.3f", primerOperando);
                                printf(" no tiene factorial porque no es un numero entero positivo y %.3f", segundoOperando);
                                printf(" tampoco tiene factorial porque no \n");
                                printf("es un numero entero positivo.\n");
                            }
                        }
                    }
                }

                printf("____________________________________________________________________________________________________________\n");
            }
            else
            {
                printf("____________________________________________________________________________________________________________\n");
                printf("\nError. Primero ingrese dos operandos y seleccione la opcion 3) para realizar calculos.\n");
                printf("____________________________________________________________________________________________________________\n");
            }
            break;

        case 5:
            break;
        default:
            printf("Error. Ingrese una opcion valida.\n");
        }
    }
    while (opcion !=5);

    return 0;
}

