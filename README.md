# Simulador de Conta Bancaria em C
O programa simula operações básicas de um conta bancaria. Como depositar, sacar ou consultar.

<!-- Explicacao do programa-->
<div>
  
## Sobre o programa
O programa agregou todo o conhecimento em Linguagem C, para iniciantes, desde as declarações de variáveis até as sub-rotinas.

O sistema simula um banco fictício chamado Uninove. Ao inicio informa para que o usuário digite seu nome.

Adiante pede para que informe o número e a senha de sua conta. Nesse caso aceita apenas dados do tipo **int**.

A partir dessa fase, o programa entra em loop de *operações*, sendo elas, depositar, sacar, consultar até o usuário sair. Sendo no total 4 operações, más caso a pessoa digite um número fora do intervalo de 1 a 4, um aviso aparecerá, informando que a operação é inválida.

</div>

<!-- Programa rodando -->
<div>

## Programa em execução

### Validação
  
Se caso as informações digitadas forem as mesmas que cadastradas, então as opções de operações irão
ser exibidas.

Um dos possíveis casos:
  
<img src="https://i.pinimg.com/originals/ca/90/70/ca9070dadf84a58777945915ea7557be.jpg" width="600px"/><br>

Dependendo da operação, o saldo que antes era 0, poderá ter um acréscimo, no entanto o valor a ser sacado não poderá ultrapassar o valor máximo em sua conta fictícia.
  
## Possível erro de entrada de dados
  
NÃO coloque letras e nem caracteres especiais, como "a, b, c, @, /", em lugares que só aceitam números, como nas operações bancária, no número e na senha da conta.
  
<img src="https://cdn.discordapp.com/attachments/865484290648178708/878473502607442020/ezgif.com-gif-maker.gif" width="500px"/><br>
O programa então entrará em loop!
  
</div>



