#include <stdio.h>

// 01 -  Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor;
// Aluno: José Luz

int main (){

	//Definição de variáveis
	int num;

	//Entrada e saída de valor digitado.
	printf("\nDigite um número inteiro: ");
	scanf("%d" ,&num);
	printf("%s" "%d" ,"\nO antecessor do número digitado é: " ,(num-1));

	return 0;
}
