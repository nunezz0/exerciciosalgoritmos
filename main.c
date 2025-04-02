#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    float num, metade;

    printf( "Entre com um número: ");
    scanf( "%f", &num );

    metade = num / 2;

    printf( "\nA metade do número é: %f\n", metade );
}
