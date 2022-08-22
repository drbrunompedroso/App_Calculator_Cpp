#include <stdio.h>
#include <conio.h>

float value_1, value_2, result;
char signal;	

main()
{
	while(1)
	{	  
      printf("CALCULADORA""\n");
      printf("valor 1:""\n");
      scanf("%f", &value_1);
      printf("valor 2:""\n");
      scanf("%f", &value_2);
      printf("operacao:""\n");
      scanf("%s", &signal);
          
		switch(signal)
		{
			case '+':
				result=value_1+value_2;
				break;
			case '-':
				result=value_1-value_2;
				break;
			case '*':
				result=value_1*value_2;
				break;
			case '/':
				result=value_1/value_2;	
				break;			
			default:
				printf("\n""FUNCAO INVALIDA");
				break;
		}
    printf("\n""resultado %f" "\n",result);
    getch();      
  	}
}
