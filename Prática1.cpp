#include <iostream>
//Code's variables
int main() {
	int age, countrycd;
	//Text that will be displayed on the screen within a do while loop
	do{
		printf("Ola, sou o tofree e vou te ajudar a saber se voce eh ou nao maior de idade na sua viagem pelos paises membros do mercosul!");
		printf("\n Hola, soy tofree y te ayudare a saber si eres mayor de edad o no en tu viaje a los países miembros del Mercosur!");
		printf("\n ARG (1) BRA (2) PRY (3) URU (4)");
		printf("\n\n Digite o codigo de acordo com o pais que voce esta no momento--Ingrese el codigo segun el pais en que te encuentras actualmente: \n");
		scanf("%d", &countrycd);
		printf("\n\n Diga sua idade em numeros/Di tu edad en numeros: \n");
		scanf("%d", &age);
	} while((countrycd<1)||(countrycd>4));
	
	// It can be used instead do while loop if((countrycd<1)||(countrycd>4)){printf("Voce nao digitou nenhuma das opcoes apresentadas anteriormente :(");}	
	
	//Switch case
	switch(countrycd){
		case 1: 
		if(age >=16){
			printf("Voce esta na Argentina e ja eh maior de idade. -- Estas en Argentina y ya eres mayor de edad.");
		}
		else if(age <16){
			printf("Voce esta na Argentina e ainda nao eh maior de idade. -- Estas en Argentina y ya eres mayor de edad.");
		}
		break;
		case 2:
		if(age >=18){
			printf("Voce esta no Brasil e ja eh maior de idade. -- Estas en Brasil y ya eres mayor de edad.");
		}
		else if(age <18){
			printf("Voce esta no Brasil e ainda nao eh maior de idade. -- Estas en Brasil y ya eres mayor de edad.");
		}
		break;
		case 3:
			if(age >=15){
			printf("Voce esta no Paraguay e ja eh maior de idade. -- Estas en Paraguay y ya eres mayor de edad.");
		}
		else if(age <15){
			printf("Voce esta no Paraguay e ainda nao eh maior de idade. -- Estas en Paraguay y ya eres mayor de edad.");
		}
		break;
		case 4:
		if(age >=18){
			printf("Voce esta no Uruguay e ja eh maior de idade. -- Estas en Uruguay y ya eres mayor de edad.");
		}
		else if(age <18){
			printf("Voce esta no Uruguay e ainda nao eh maior de idade. -- Estas en Uruguay y ya eres mayor de edad.");
		}
		break;
	}
	
return 0;
}


		
