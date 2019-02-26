#include <stdio.h>

// Admitindo que uma data é lida pelo algoritmo em uma variável inteira, e não em uma variável do tipo data,
// crie um algoritmo que leia uma data no formato DDMMAA e imprima essa data no formato AAMMDD, onde:
// letra D corresponde a dois algarismos representando o dia;
// letra M corresponde a dois algarismos representando o mês;
// letra A corresponde aos dois últimos algarismos representando o ano.
// 
// Turma: B64084 - Desenvolvimento de Sistemas
// Aluno: José Santos da Luz
//

int main() {

	int dia, mes, ano;

	printf("Digite o DIA com dois digitos: ");
	scanf("%d" ,&dia);
	printf("Digite o MÊS com dois digitos: ");
	scanf("%d" ,&mes);
	printf("Digite o ANO com dois digitos: ");
	scanf("%d" ,&ano);

	printf("A data em formato AAMMDD: %d%d%d" ,ano ,mes ,dia);

	return 0;

}

