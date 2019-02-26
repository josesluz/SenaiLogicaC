#include <stdio.h>

// 07 - Calcular a soma dos 100 primeiros números naturais
// Aluno: José Luz
//

int main(){

	int num = 1, soma = 0;

	while (num <= 100) {
		soma = soma + num;
		num = num+1;
	}
	
	printf("%d" ,soma);

	return 0;

}
