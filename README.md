# Documentação do Programa de Conta Bancária em C

## Descrição

Este programa é uma simulação de uma conta bancária em C, oferecendo funcionalidades básicas de depósito, saque e consulta de saldo. O usuário pode interagir com o programa através de um menu, informando um número de conta e senha para realizar operações de forma segura.

## Funcionalidades Principais

- **Cadastro de Conta**: O usuário informa seu nome, número da conta e senha.
- **Depósito**: O usuário pode adicionar um valor ao saldo.
- **Saque**: O usuário pode retirar um valor do saldo, desde que tenha fundos suficientes.
- **Consulta de Saldo**: O usuário pode visualizar o saldo atual de sua conta.

## Estrutura do Código

O programa é dividido em três funções principais, além da função `main`:

1. `depositar()`: Função para realizar um depósito, adicionando o valor ao saldo.
2. `sacar()`: Função para realizar um saque, subtraindo o valor do saldo.
3. `getSaldo()`: Função para obter o saldo atual da conta.

### Estrutura do Menu

O menu principal do programa permite que o usuário escolha entre as operações de depósito, saque, consulta de saldo e saída.

## Explicação do Código

### Declaração de Variáveis Globais

```c
char nome[50];
int numero, senha;
double saldo=0, valor;
```

- `nome`: Armazena o nome do usuário.
- `numero`: Armazena o número da conta do usuário.
- `senha`: Armazena a senha da conta do usuário.
- `saldo`: Variável que armazena o saldo atual da conta (inicialmente `0`).
- `valor`: Variável auxiliar usada para os valores de depósito e saque.

### Funções

#### `void depositar()`

Adiciona o valor da variável `valor` ao `saldo`.

```c
void depositar(){
	saldo += valor;
}
```

#### `void sacar()`

Subtrai o valor da variável `valor` do `saldo`.

```c
void sacar(){
	saldo -= valor;
}
```

#### `double getSaldo()`

Retorna o saldo atual da conta.

```c
double getSaldo(){
	return saldo;
}
```

### Função `main()`

A função `main()` contém o fluxo principal do programa, que inclui a coleta de informações do usuário e o loop do menu.

```c
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
```

Após a inicialização, o programa exibe um menu com as operações possíveis e aguarda a escolha do usuário:

```c
do{
	printf("\nDigite a operação a seguir: 1 - Depositar | 2 - Sacar | 3 - Consultar | 4 - Sair: \n");
	scanf("%d", &op);
	
	//Variaveis de controle
	int cNumero; 
	double cSaldo;

	switch(op){
		...
	}
} while(op != 4);
```

### Estrutura do `switch` para o Menu

- **Caso 1 (Depósito)**: Verifica se o número da conta é válido e realiza o depósito.
- **Caso 2 (Saque)**: Verifica se o número da conta é válido e, em seguida, se o saldo é suficiente para o saque.
- **Caso 3 (Consulta de Saldo)**: Verifica se o número da conta é válido e exibe o saldo.
- **Caso 4 (Sair)**: Encerra o programa.
- **Default**: Mensagem de operação inválida.

---

## Compilação e Execução

1. **Compile o Programa**:
   ```bash
   gcc Conta_Bancaria_C.c -o Conta_Bancaria_C
   ```

2. **Execute o Programa**:
   ```bash
   ./Conta_Bancaria_C
   ```

## Considerações Finais

Este programa é uma implementação básica de um sistema bancário e pode ser expandido para incluir funcionalidades adicionais, como autenticação por senha e múltiplas contas.
