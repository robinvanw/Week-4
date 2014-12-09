
#include <stdio.h> 

int main(void)
{
	long catalan(int n);
	int getal, uitkomst;

	printf("\n\nWelkom\n");

	printf("\nVoer een geheel getal in : ");
	scanf("%d", &getal);

	uitkomst = catalan(getal);

	printf("\nUw berekende waarde is   : %d", uitkomst);
	getchar();
	getchar();
}

long catalan(int n)
{
	long uitkomst;

	uitkomst = (faculteit(2 * n)) / (faculteit(n*faculteit(n + 1)));

	return uitkomst;

}

int faculteit(int n)
{
	int i, res = 1;
	for (i = 1; i <= n; i = i + 1) { res = res * i; }
	return res;
}
