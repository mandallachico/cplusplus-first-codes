#include <bits/stdc++.h>
//ou iostream
int main(int argc, char** argv) {
    
    using namespace std;
    char name[10];
	int peso;
    int idade;
	int soma;
	
	printf("Complete the phrase.\n");
    printf("Hello, world. My name is...: \n");
    scanf("%s", &name);

    printf("digite seu peso\n");
    scanf("%d", &peso);
    
    printf("digite sua idade \n");
    scanf("%d", &idade);
    
    printf("\n Name: %s", name );
    
    printf("\n Peso: %d", peso);
    
    printf("\n idade: %d", idade);
    
    printf("\n A soma do seu peso e idade eh: %d", soma);
    cout<<peso + idade;

    return (EXIT_SUCCESS);
}
