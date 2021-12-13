/*A empresa ADA te contratou para implementar no sistema de folha de pagamentos uma nova funcionalidade. Esse funcionalidade deve receber um salário e realizar um cálculo para reajustar os salários das pessoas e então retornar o valor atualizado. O reajuste deve ocorrer com base nessa tabela:*/

/*
0 ate 1999.99 reajuste de 20%
2000 ate 3999.99 reajuste de 20%
4000 ate 6999.99 reajuste de 20%
7000 ate infinito reajuste de 20%
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    double salario;
    double novoSalario;

    printf("\nInforme o Salario do colaborador para reajuste: ");
    scanf("%lf", &salario);

    if(salario > 0 && salario < 2000){
        novoSalario = salario * 1.20;
    }

    if(salario >= 2000 && salario < 4000){
        novoSalario = salario * 1.15;
    }

    if(salario >= 4000 && salario < 7000){
        novoSalario = salario * 1.10;
    }

    if(salario >= 7000){
        novoSalario = salario * 1.05;
    }

    printf("\nReajuste salarial aplicado o novo salario e de: %.3lf", novoSalario);

    return 0;
}