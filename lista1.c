
#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Cecilia Campos!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
    printf("30*27 = %d", 30*27);
}

//3. Faça um programa que imprima a media aritmetica entre os numeros 5, 8, 12.
void q3() {
    float media = (5+8+12)/3.0;
    printf ("media de 5,8,12 é igual a %f\n" , media);   
}

//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
   int nume = 0;
   printf("digite um valor numérico inteiro: ");
   scanf("%d" , &nume);
   printf("o valor digitado foi %d\n" , nume);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5() {
   int a,b;
   printf("digite um número qualquer: \n");
   scanf("%d" , &a);
   printf("digite outro numero diferente do primeiro: /n");
   scanf("%d" , &b);
   printf("seus dois numeros são: %d e %d\n", a, b);
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6() {
    int nume = 0;
    printf("digite um valor numerico inteiro: ");
    scanf("%d" , &nume);
    printf("o valor antecessor e sucessor: %d e %d" , nume-1, nume+1);
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7() {
    char nome[33], endereco[33], telefone[33];
    printf("nome: ");
    scanf("%s" , nome);
    printf("Endereço:");
    scanf("%s" , endereco);
    printf("Telefone: ");
    scanf("%s" , telefone);
    printf("%s\n%s\n%s\n" ,nome, endereco, telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8() {
     int a, b;
     printf("digite um numero qualquer: \n");
     scanf("%d" , &a);
     printf("digite um numero diferente do primeiro: \n");
     scanf("%d" , &b);
     printf("a subtração dos valores é: %d\n" , a-b);
}



//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q8();
    return EXIT_SUCCESS;
}
