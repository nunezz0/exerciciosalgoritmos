//Faça um algoritmo que calcule a velocidade média de um trajeto com base na distância percorrida e no tempo (em decimal) usado para isso.
#include <stdio.h>
#include <locale.h>

int main(){
setlocale( LC_ALL, "Portuguese");

float distancia, tempo, velocidade;

printf( "Entre com distância: ");
scanf( "%f", &distancia );

printf( "Entre com tempo: ");
scanf( "%f", &tempo );

velocidade = distancia / tempo;

printf( "\nSua velocidade média: %f\n", velocidade );

}
