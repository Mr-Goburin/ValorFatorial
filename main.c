#include <stdio.h>
int valor_ft;

void calc_fatorial(int valor_n) {
	for (valor_ft = 1; valor_n > 1; valor_n = valor_n - 1)
	{
		valor_ft = valor_ft * valor_n;
	}
}
int main() {
	int v;
	scanf_s("%d", &v);
	calc_fatorial(v);
	printf("Valor fatorial de: [%d] é [%d]", v, valor_ft);
	return 0;
}

