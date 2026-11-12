#include <stdio.h>

int main(){

    int a, b, c;

    // Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    printf("\nVocê digitou: %d, %d, %d\n\n", a, b, c);

    // Operações matemáticas
    int soma = a + b + c;
    int subtracao = a - b - c;
    int multiplicacao = a * b * c;
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    if (b != 0 && c != 0) {
        float divisao = (float) a / b / c;
        printf("Divisão: %.2f\n", divisao);
    } else {
        printf("Divisão: não é possível dividir por zero. \n");
    }

    // Comparação 1
    if (a > b) {
        printf("O primeiro número é maior que o segundo.\n");
    } else {
        printf("O primeiro número não é maior que o segundo.\n");
    }

    // Comparação 2
    if (b < c) {
        printf("O segundo número é menor que o terceiro.\n");
    } else {
        printf("O segundo número não é menor que o terceiro.\n");
    }

    //Operadores Lógicos
    if (a > 0 && b % 2 == 0) {
        printf("O primeiro número é positivo e o segundo é par.\n");
    } else {
        printf("As duas condições não são verdadeiras ao mesmo tempo.\n");
    }

    return 0;
}

//Aplicação de boas praticas de "clean code" &&
//"code refactoring" no código acima: