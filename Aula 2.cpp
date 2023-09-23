#include <iostream>

 int main() {
   float salario, inss, ir, sal_liquido;
   int valor, valor1, svt, contador;
   
   printf("Vamos calcular seus descontos do seu salario!\n");
   printf("Digite seu salario bruto: \n");
   scanf("%f", &salario);
   
   if(salario <= 1693.72){
   	inss = salario * 0.08;
   }
   else
   if(salario >= 1693.73 && salario <= 2822.90){
   	inss =  salario * 0.09;
   }
   if(salario >= 2822.91 && salario <= 5646.80){
   	inss =  salario * 0.11;
	}
   else
   if(salario >= 5646.81){
   	inss = 621.04;
	}
	
	printf("Desconto do Inss = %f \n", inss);
	
   if(salario >= 1903.99 && '<= 2826.65'){
   	ir =  salario * 0.075;
   }
   else
   if(salario >= 2826.66 && salario <= 3751.05){
   	ir =  salario * 0.15;
	}
   
   if(salario >= 3751.06 && salario <= 4664.68){
   	ir =  salario * 0.225;
	}
   else
   if(salario >= 4664.69){
   	ir =  salario * 0.275;
	}
	printf("Desconto do IR = %f \n", ir);
	
	sal_liquido = (salario - inss) - ir;
	
	printf("Seu salario liquido atual eh: %f \n", sal_liquido);
	
	printf("Digite um valor ate 8 e contaremos ate 9:\n");
	scanf("%d", &valor1);
	
	while(valor1 < 10)
	{
		printf("Valor agora eh: %d\n", valor1);
		valor1 ++;
	}
	
	do{
	
	printf("\nDigite um valor ate 18 para repetir ou maior que 18 para continuar:\n");
	scanf("%d", &valor);
	
		printf("Valor agora eh: %d\n", valor);
		valor ++;
	} while (valor<20);
	
	do{
		printf("\nDIGA SEU SORVETE E DIREMOS A COR DELE");
		printf("\nInforme o numero equivalente ao sabor que escolheu.\n");
		
		printf("\t1 para flocos\n");
		printf("\t2 para morango\n");
		printf("\t3 para chocolate\n");
		scanf("%d", &svt);
		
	} while((svt<1)||(svt>3));
	if((svt<1)||(svt>3))
	{
		printf("Voce nao digitou nenhuma das opções apresentadas anteriormente :(");
	}
	
	switch(svt){
		
		case 1:
		printf ("\t\tVoce escolheu o sorvete branco com pontos pretos.\n");
        break; 
        
        case 2:
        printf ("\t\tVoce escolheu o sorvete rosa com pontos vermelhos.\n"); 
        break;
        
        case 3: 
        printf ("\t\tVoce escolheu o sorvete marrom com pontos pretos.\n"); 
		break;
	}
	
	printf("\nHora da contagem regressiva! Insira um numero.\n");
	scanf("%d", &contador);
	
	for(contador; contador >=1; contador --)
	{
		printf("%d" "\n", contador);
	}
}
	