#include <stdio.h>

/*Crie uma função que some dois números inteiros*/

//função soma

int Soma(int *a, int *b)
{
    *a = *a + *b;
    printf("\nEnd memoria que a aponta = %i", a);
    printf("\nEnd memoria que b aponta = %i", b);
    return *a;
}


void main()
{
    int num1 = 5, num2 = 3;

    printf("\nSoma = %i", Soma(&num1, &num2));
    printf("\nEnd memoria Num1 = %i", &num1);
    printf("\nEnd memoria Num2 = %i", &num2);

}


