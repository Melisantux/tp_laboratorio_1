#include <stdint.h>
#include <stdio.h>
#include "biblioteca_operacionesMatematicas.h"

float sumarDosFlotantes(float numeroUno, float numeroDos)
{
    float suma;

    suma = numeroUno + numeroDos;

    return suma;
}

float restarDosFlotantes(float numeroUno, float numeroDos)
{
    float resta;

    resta = numeroUno - numeroDos;

    return resta;

}

float multiplicarDosFlotantes(float numeroUno, float numeroDos)
{
    float multiplicacion;

    multiplicacion = numeroUno * numeroDos;

    return multiplicacion;
}

float dividirDosFlotantes(float dividendo, float divisor)
{
    float division;

    division = dividendo / divisor;

    return division;
}

long long int calcularFactorial(float numeroVerificadoEntero)
{
    long long int factorial = 1;


    if(numeroVerificadoEntero == 0)
    {
        factorial = 1;
    }
    else
    {
        if(numeroVerificadoEntero > 0)
        {
            do
            {
                factorial= factorial * numeroVerificadoEntero;
                numeroVerificadoEntero--;
            }
            while (numeroVerificadoEntero > 1);
        }
    }

    return factorial;
}
