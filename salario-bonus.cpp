#include <stdio.h>
 
int main() {
 
	char nome; 
	double salario, vendas, conta;
	scanf("%s" "%lf" "%lf", &nome, &salario, &vendas);
	conta = vendas * 0.15;
	printf("TOTAL = R$ %0.2lf\n", conta + salario);
 
    return 0;
}
