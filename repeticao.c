#include <stdio.h>
#include <conio.h>

void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

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
    printf("digite um número: ");
    scanf("%d", &number);

    for(i = 1; number >= i; i += 2)
    {
        printf("%d\n", i);
    }
};

void multTres()
{
    int i;

    for(i = 0; i <= 3*5; i+=3) 
        printf("%d\n", i);
}

void cinquentaNumerosPares()
{
    int i;
    int result = 0;

    for(i = 0; i <= 50*2; i+=2) 
    {
        result += i;
    }
        printf("%d\n", result);
};

struct Fruits {
    char name[10];
    int price;
};

void fruitList()
{
    int i, c = 's', j;
    int fruit, amount, price = 0;
    struct Fruits fruitsList[3] = {
        {"Abacaxi", 5},
        {"Maca", 1},
        {"Pera", 3},
    };

    printf("BEM VINDO AO SACOLÃO!\n\n");
    
    while(c == 's')
    {
        j = 1;
        for(i = 0; i < 3; i++)
        {
            printf("%d. %s - %d,00/unidade\n", j, fruitsList[i].name, fruitsList[i].price);
            j++;
        }

        printf("escolha sua fruta: ");
        scanf("%d", &fruit);

        printf("escolha a quantidade: ");
        scanf("%d", &amount);

        price += fruitsList[fruit-1].price * amount;

        printf("\n\nvalor da conta: %d\n\n", price);
        printf("deseja comprar mais frutas? (s/n)\n");
        c = getch();
    }
}

void pesquisa()
{
    char sexo, eyesColor, hairColor;
    int totalHabitantes = 0, requisitos = 0;
    unsigned int age, salary;
    float porcentagemFinal;

    while(age != -1) {
        printf("responda às seguintes perguntas: \n\n");

        printf("sexo (m, f)");
        while((sexo = getchar()) != 'm' && sexo != 'f');
    
        printf("cor dos olhos (a, v, c, p) \n");
        while((eyesColor = getchar()) != 'a' && eyesColor != 'v' && eyesColor != 'c' && eyesColor != 'p');
    
        printf("cor dos cabelos (l, c, p, r) \n");
        while((hairColor = getchar()) != 'l' && hairColor != 'c' && hairColor != 'p' && hairColor != 'r');

        printf("idade (entre 10 e 100 anos) \n");
        do {
            scanf("%d", &age);
        } while(age < 10 && age > 100);

        if(sexo == 'f' && eyesColor == 'c' && hairColor == 'c' && (age > 18 && age < 35)) 
        {
            requisitos++;
        }
        totalHabitantes++;
    }

    porcentagemFinal = (float)(requisitos * 100) / totalHabitantes;
    printf("quantidade de pessoas entrevistadas: %d\n", totalHabitantes);
    printf("porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos %.2f", porcentagemFinal);
};

int main()
{
    int option;
    printf("escolha uma opção: \n");
    printf("1 - imprimir todos os números até o escolhido em ASC \n");
    printf("2 - imprimir todos os números até o escolhido em DESC \n");
    printf("3 - imprimir todos os números impares até o escolhido \n");
    printf("4 - cinco primeiros multiplos de 3 \n");
    printf("5 - soma dos 50 primeiros numeros pares \n");
    printf("6 - lista de frutas \n");
    printf("7 - pesquisa \n");
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
        case '4':
            multTres();
            break;
        case '5':
            cinquentaNumerosPares();
            break;
        case '6':
            fruitList();
            break;
        case '7':
            pesquisa();
            break;
    }
    
};