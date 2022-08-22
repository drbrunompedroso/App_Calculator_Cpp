#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float n1,
	  n2,
	  res,
	  res2,
	  x,
	  y,
	  calc;

char esc;

int i;
//**************************ENTRADA DE DADOS*****************************************//
void dados()
{
	printf("\nEntre com o primeiro valor:\n");
	scanf("%f", &n1);
	printf("\nEntre com o segundo valor:\n");
	scanf("%f", &n2);
}
//*************************DEFINIÇÃO DA OPERAÇÃO MATEMÁTICA************************//
void def_oper()
{
	printf("\nDefina Operacao:");
	printf("\n+ - SOMA  \n- - SUBTRACAO  \n* - MULTIPLICACAO  \n/ - DIVISAO  \n# - POTENCIA (X2 Y2) \n@ - POTENCIA (X3 Y3)  \n& - POTENCIA (X4 Y4) \n$ - RAIZ QUADRADA (X Y) \n%% - (X2 + Y3)\n");
	scanf("%s", &esc);
}

//*************************FUNÇÕES COM RETORNO****************************************//

float soma(float x, float y)
{
	res = x + y;
	return (res);
}
float sub(float x, float y)
{
	res = x - y;
	return (res);
}
float mult(float x, float y)
{
	res = x * y;
	return (res);
}
float div(float x, float y)
{
	res = x / y;
	return (res);
}

//*************************FUNÇÕES SEM RETORNO****************************************//
void pot2(float x, float y)
{
	res = pow(x,2);
	res2 = pow(y,2);
	printf("\nResultado: %.2f \n", res);
	printf("\nResultado: %.2f \n", res2);
}
 void pot3(float x, float y)
{
	res = pow(x,3);
	res2 = pow(y,3);
	printf("\nResultado: %.2f \n", res);
	printf("\nResultado: %.2f \n", res2);
}
void pot4(float x, float y)
{
	res = pow(x,4);
	res2 = pow(y,4);
	printf("\nResultado: %.2f \n", res);
	printf("\nResultado: %.2f \n", res2);
}
void raiz(float x, float y)
{
	res = sqrt(x);
	res2 = sqrt(y);
	printf("\nResultado: %.2f \n", res);
	printf("\nResultado: %.2f \n", res2);
}
void soma_pot(float x, float y)
{
	res = pow(x,2);
	res2 = pow(y,3);
	res2 = res2 + res;
	printf("\nResultado: %.2f \n", res2);
}

//***********************************FUNÇÃO PARA ESCOLHA DE OPERAÇÃO*******************//
void resultado()
{
	switch(esc)
	{
		case '+':
			calc = soma(n1, n2);
			printf("\nResultado: %.2f \n", calc);
		break;
		case '-':
			calc = sub(n1, n2);
			printf("\nResultado: %.2f \n", calc);
		break;
		case '*':
			calc = mult(n1, n2);
			printf("\nResultado: %.2f \n", calc);
		break;
		case '/':
			calc = div(n1, n2);
			printf("\nResultado: %.2f \n", calc);
		break;	
		case '#':
			pot2(n1, n2);
		break;
		case '@':
			pot3(n1, n2);
		break;
		case '&':
			pot4(n1, n2);
		break;
		case '$':
			raiz(n1, n2);
		break;
		case '%':
			soma_pot(n1, n2);
		break;
		default:
			printf("\nVALOR INVALIDO \n");
		break;	
	}
}
//*************************FUNÇÃO PRINCIPAL************************//
int main(void)
{
	printf("\nRESOLUCAO EXERCICIO - CALCULADORA EM LOOP\n");	
	for(i==0; i<=3; i++)
	{
		printf("\nLEITURA: %d\n", i+1);
		dados();
		def_oper();
		resultado();
		system("pause");	
	}
	return 0;
}

