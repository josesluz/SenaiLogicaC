#include <stdio.h>

// A série de Fibonacci é uma sequência de termos que tem como os 2 primeiros termos, respectivamente, os números 0 e 1.
// A partir daí, os demais termos são formados seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir: 0 1 1 2 3 5 8 13
//
// Turma B64084 - Desenvolvimento de Sistemas
// Aluno: José Luz

int main(){

	int numInicial = 0, numFinal, soma;

	printf("Digite o valor final aproximado para a sequencia: ");
	scanf("%d" ,&numFinal);

	while (numInicial <= numFinal){
		soma = numInicial + soma


	printf("Informe o ano de nascimento: ");
	scanf("%d" ,&anoNascimento);

	printf("Informe o ano de inicio do trabalho: ");
	scanf("%d" ,&anoIngresso);

	idade = anoAtual-anoNascimento;
	tempoTrabalhado = anoAtual-anoIngresso;

	if (((anoAtual-anoNascimento >= 65) || (anoAtual-anoIngresso >= 30)) || ((anoAtual-anoNascimento >= 60 && anoAtual-anoIngresso >= 25))){
		printf("%s" "%d" "%s" "%d" "%s" "%d" "%s" ,"O funcionário de código " ,codigo ," possui " ,idade ," anos de idade e " ,tempoTrabalhado ," anos de trabalho. Requer aposentadoria!"); 
	} else {
		printf("%s" "%d" "%s" "%d" "%s" "%d" "%s" ,"O funcionário de código " ,codigo ," possui " ,idade ," anos de idade e " ,tempoTrabalhado ," anos de trabalho. Não requer aposentadoria!");
	}

	return 0;

}
