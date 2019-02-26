#include <stdio.h>

// 02 - Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo (base*altura).
// Turma : B64084 - Desenvolvimento de Sistemas
// Aluno: José Santos da Luz

#include <stdio.h>

int main(){
	
	//Definição de variáveis
	float base, altura, areaRetangulo;

	//Entrada de dados e armazenamento nas variáveis
	printf("Digite o valor da base do retângulo: ");
	scanf("%f" ,&base);
	printf("Digite o valor da altura do retângulo: ");
	scanf("%f" ,&altura);

	//Calculo que define a área do retângulo
	areaRetangulo = base*altura;

	//Saída de resultado com arredondamento de casas decimais
	printf("O valor da área do retangulo é de: %.2f" ,areaRetangulo);
	printf("");

	return 0;	

}
