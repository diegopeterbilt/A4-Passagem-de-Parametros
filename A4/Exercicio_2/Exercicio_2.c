#include <stdio.h>

/*Crie uma função que some dois números inteiros*/

//função soma

int Soma(int a, int b)
{
    a = a + b;
    return a;
}


void main()
{
    int num1 = 5, num2 = 3;

    printf("Soma = %i", Soma(num1, num2));
    printf("\nNum1 = %i", num1);
    printf("\nNum2 = %i", num2);

}


