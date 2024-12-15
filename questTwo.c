/*
Exercício 2- Elaborar um programa em C (utilizando a estrutura for) que leia 10 valores inteiros e: 

* Encontre e mostre o maior valor; 
* Encontre e mostre o menor valor; 
* Calcule e mostre a média aritmética dos números lidos.
*/
#include<stdlib.h>
#include<stdio.h>

int main (int argc, char*argv[])
{
    //receives from cli number of ops to be made 

    //a loop to do the readings
    const int num_args;
    int greater=0;
    int smaller=0;
    int avg=0;
    printf("\nn ARGUMENTS: ");
    scanf("%d", &num_args);//could be using regex

    int *array_num;
    array_num=(int*)calloc(num_args,sizeof(int));
    if(array_num==NULL)
    {
        return -1;
    }
    for(int i=0; i<num_args; i++)
    {
        printf("\ninserir %d numero: ", i);
        while(1)
        {
            scanf(" %d", &array_num[i]);
            if(array_num[i]>0)
            {
                break;//only leaves if readNum>0
            }
        }
        if(i==0)
        {
            greater=i;
            smaller=i;
        }else{
            if(array_num[i]>array_num[greater])
            {
                greater=i;
            }
            if(array_num[i]<array_num[smaller])
            {
                smaller=i;
            }
        }
        avg=avg+array_num[i];
    }

    //calc the averange
    avg=avg/num_args;
    //print the bigger and the smallest number
    printf("\n----------\n\tThe: \nSmaller: %d\nGreater: %d\n\nAverange: %d \n-----", array_num[smaller], array_num[greater], avg);

    //and sort using some sorting alg
    free(array_num);
return 0;
}