//
#include<stdlib.h>
#include<stdio.h>
#define LOOP_max 2
#include "mathOps.h"

/*
Fazer um programa em "C" que solicite 2 números e ao final informe para o usuário: 

a) A soma dos números;
b) O produto do primeiro número pelo quadrado do segundo; 
c) O quadrado do primeiro número; 
d) A raiz quadrada da soma dos quadrados; 
e) O módulo do primeiro número.
 */

void module(int number[])
{
    printf("\nmodulo primeiro num %d \n", moduleCalc(number[0]));
}

void powAndSquare(int number[])//d 
{
//d) A raiz quadrada da soma dos quadrados; 
    int pow1=atPow(number[0]);
    int pow2=atPow(number[1]);
    int powSum=pow1+pow2;
    double sumSquares=squareRoot(powSum);
    printf("\nraiz da soma dos pows %lf \n", sumSquares);

}
void twoPow(int number[])//c
{
    printf("\nquadrado primeiro %d\n", atPow(number[0]));
}

void prod(int number[])//b
{
    int prod =number[0]*atPow(number[1]);
    printf("\nproduto: %d\n", prod);
}
void sum(int number[])//a
{
    int sum=0;
    for(int i=0;i<LOOP_max; i++)
    {
        sum=sum+number[i];
    }
    printf("\nsome: %d\n", sum);
}
int main(int argc, char*argv[])
{
//read 2

    int number[LOOP_max];
    for(int i= 0; i<LOOP_max; i++)
    {
        printf("\nputs n%d ", i);
        scanf(" %d", &number[i]);
    }
    sum(number);
    prod(number);
    twoPow(number);
    powAndSquare(number);
    module(number);


return 0;
}

//todo: debugar