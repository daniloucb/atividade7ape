#include <stdio.h>

void asc()
{
    int i = 0;
    int number;
    printf("digite um número: \n");
    scanf("%d", &number);

    while(i <= number)
    {
        printf("%d\n", i);
        i++;
    }
};

void desc()
{
    int i = 0;
    int number;
    printf("digite um número: \n");
    scanf("%d", &number);

    while(number >= i)
    {
        printf("%d\n", number);
        number--;
    }
};

void impares()
{
    int i;
    int number;
    printf("digite um número: \n");
    scanf("%d", &number);
};

int main()
{
    int option;
    printf("escolha uma opção: \n");
    printf("1 - imprimir todos os números até o escolhido em ASC \n");
    printf("2 - imprimir todos os números até o escolhido em DESC \n");
    printf("3 - imprimir todos os números impares até o escolhido \n");
    printf("4 - cinco primeiros multiplos de 3 \n");
    option = getchar();

    switch(option) 
    {
        case '1':
            asc();
            break;
        case '2':
            desc();
            break;
        case '3':
            impares();
            break;
    }
    
};