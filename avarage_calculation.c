#include <stdio.h>
#include <stdlib.h>

int main()
{
	int mat, edb, ing;
	printf("lutfen mat notunu giriniz:");
	scanf_s("%d", &mat);
	printf("lutfen edb notunu giriniz:");
	scanf_s("%d", &edb);
	printf("lutfen ing notunu giriniz:");
	scanf_s("%d", &ing);
	float ort = (mat + edb + ing) / 3;
	printf("mat notunuz:%d\n", mat);
	printf("edb notunuz:%d\n", edb);
	printf("ing notunuz:%d\n", ing);
	printf("ortalamaniz:%0.2f\n", ort);
}
