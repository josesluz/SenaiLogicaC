#include <stdio.h>

// Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em condições, um dos seguintes requisitos deve ser satisfeito: - Ter no mínimo 65 anos de idade. - Ter trabalhado no mínimo 30 anos. - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. Com base nas informações acima, faça um algoritmo que leia: o número do empregado (código), o ano de seu nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'.
//
// Turma B64084 - Desenvolvimento de Sistemas
// Aluno: José Luz

int main(){

	int codigo, anoNascimento, anoIngresso, anoAtual = 2019, idade, tempoTrabalhado;

	printf("Informe o codigo do funcionário: ");
	scanf("%d" ,&codigo);

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
