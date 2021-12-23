#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Dados do usuario
char nome[50];
int numero, senha;
double saldo=0, valor;

// Depositar
void depositar(){
	saldo += valor;
}

// Sacar
void sacar(){
	saldo -= valor;
}

// Exibir o saldo
double getSaldo(){
	return saldo;
}


int main(){
	setlocale(LC_ALL, "Portuguese");

	int op;

	printf("Bem vindo ao banco Uninove, por favor informe seu nome completo\n");
	gets(nome);

	printf("Bem vindo %s, primeiro passo cadastre sua conta, informe seu número e sua senha\n\n", nome);

	printf("Informe seu número: ");
	scanf("%d", &numero);

	printf("Informe sua senha: ");
	scanf("%d", &senha);

	do{

		printf("\nDigite a operação a seguir: 1 - Depositar | 2 - Sacar | 3 - Consultar | 4 - Sair: \n");
		scanf("%d", &op);

		//Variaveis de controle
		int cNumero; 
		double cSaldo;

		switch(op){

			case 1: printf("\nDepositar...\n");
					printf("\nInforme o numero de sua conta: \n");
					scanf("%d", &cNumero);

					if(cNumero == numero){
						printf("\nInforme o valor a ser depositado: \n");
						scanf("%lf", &valor);
						depositar();

					}else{
						printf("\nNumero da conta inválida!\n");	
					}
					break;

			case 2: printf("\nSacar...\n");
					printf("\nInforme o numero de sua conta: \n");
					scanf("%d", &cNumero);

					if(cNumero == numero){
						printf("\nInforme o valor a ser sacado: \n");
						scanf("%lf", &valor);

						cSaldo = getSaldo();

						if(valor > cSaldo){
							printf("\nO valor excedeu! Por favor informe um valor válido\n");
						}else{
							sacar();
						}

					}else{
						printf("\nNumero da conta inválida!\n");
					}
					break;		

			case 3: printf("\nConsultar...\n");
					printf("\nInforme o numero de sua conta: \n");
					scanf("%d", &cNumero);

					cSaldo = getSaldo();

					if(cNumero == numero ){

						printf("\nValor atual da conta %s é R$ %.2lf\n", nome, cSaldo);

					}else{
						printf("\nNumero da conta inválida!\n");
					}
					break;		

			case 4: printf("\nSair...\n");
					break;	

			default: printf("\nOperacao Invalido\n");
					 break;
		}

	}while(op != 4);

	getch();
	return 0;
}
