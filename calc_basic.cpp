#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float Value1,
      Value2,
      Result;

char Oper;

int main(void)
{
    printf("Exercicio calculadora em C++ \n");
    printf("Entre com V1: \n");
    scanf("%f",&Value1);
    printf("Entre com V2: \n");
    scanf("%f",&Value2);

    printf("Entre com a operacao matematica:\n");
    printf("+ --> SOMA; \n- --> SUBTRACAO; \n* --> MULTIPLICACAO; \n/ --> DIVISAO; \n");
    scanf("%s",&Oper);

    switch(Oper)
    {
        case '+':
            Result = Value1 + Value2;
           
        break;
        case '-':
            Result = Value1 - Value2;
            
        break;
        case '*':
            Result = Value1 * Value2;
          
        break;
        case '/':
            Result = Value1 / Value2;
            
        break;
        default:
            printf("\nOPERACAO INVALIDA\n");
        break;
    }
    printf("Resultado = %.2f \n",Result);
    system("pause");
}