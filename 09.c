#include <stdio.h>

// Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere que o N será sempre maior que ZERO.
// Turma B64084 - Desenvolvimento de Sistemas
// Aluno: José Luz

int main(){

	int num = 1, N;

	printf("Digite o valor de N: ");
	scanf("%d" ,&N);

	printf("%d\n" ,num);

	while (num < N) {
		num = num+1;
		printf("%d\n" ,num);
	}

	return 0;

}
