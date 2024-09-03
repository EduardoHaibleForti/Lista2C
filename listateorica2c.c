#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome[50];
    int idade;
    int diasdevida;

    printf("Digite o seu nome : ");
    scanf("%s",&nome);

    printf("Digite a sua idade : ");
    scanf("%d",&idade);

    diasdevida=idade*365;

    printf("%s, voce tem aproximadamente %d dias de vida.\n",nome,diasdevida);

    return 0;
}









