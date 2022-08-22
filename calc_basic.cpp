#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float value1,
      value2,
      result,
      result2;
char oper;

int main(void)
{
    printf("Exercicio calculadora em C++ \n");
    printf("Entre com V1: \n");
    scanf("%f",&value1);
    printf("Entre com V2: \n");
    scanf("%f",&value2);

    printf("Entre com a operacao matematica:\n");
    printf("+ --> SOMA; \n- --> SUBTRACAO; \n* --> MULTIPLICACAO; \n/ --> DIVISAO; \nP --> POTENCIACAO; \n");
    scanf("%s",&oper);

    switch(oper)
    {
        case '+':
            result = value1 + value2;
            printf("Resultado = %f",result);
        break;
        case '-':
            result = value1 - value2;
            printf("Resultado = %f",result);
        break;
        case '*':
            result = value1 * value2;
            printf("Resultado = %f",result);
        break;
        case '/':
            result = value1 / value2;
            printf("Resultado = %f",result);
        break;
        case 'P':
            result = pow(value1, 2);
            result2 = pow(value2, 2);
            printf("Resultado 1 = %f",result);
            printf("\nResultado 2 = %f",result2);
        break;
        default:
            printf("\nOPERACAO INVALIDA");
        break;
    }

    if(result < 10.0)
    {
        printf("\nRESULTADO MENOR QUE 10");
    }
    else if(result >= 10 && result < 100)
    {
        printf("\nRESULTADO ENTRE 10 E 100");
    }
    else
    {
        printf("\nRESULTADO ACIMA DE 100");
    }
    system("pause");
}