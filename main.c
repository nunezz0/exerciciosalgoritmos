//Faça um algoritmo que solicite ao úsuario um valor e exiba o dobro do valor.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale( LC_ALL, "Portuguese" );

    float num, dobro;

    printf( "Entre com um número: " );
    scanf( "%f", &num );

    dobro = num * 2;

    printf("\nO dobro donúmero é: %f\n", dobro);
}
