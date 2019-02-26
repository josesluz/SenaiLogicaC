#include <stdio.h>

// Escreva um algoritmo que leia X e Verifique se X é maior ou igual a 10; caso seja verdadeiro, calcule R <- x + 5. Senão calcule R <- X – 7.
// Turma: 64084 - Desenvolvimento de Sistemas 
// Aluno: José Luz
//

int main(){
	
	int X, R;

	printf("Digite o valor de X: ");
	scanf("%d" ,&X);

	if (X >= 10){
		R = X+5;
	} else {
		R = X-7;
	}
	printf("%d" ,R);

	return 0;
}

