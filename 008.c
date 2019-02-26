#include <stdio.h>

// 07 - Calcular a soma dos 100 primeiros números naturais
// Aluno: José Luz
//

int main(){

	int numInicial = 0, numSecundario = 1, soma = 0;

	while (numInicial <= 10) {
		soma = soma + numInicial;
		numInicial = numInicial + numSecundario;
		printf("%d\n" ,numInicial);
	}

	return 0;

}
