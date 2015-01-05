
#include <stdio.h> 

int main(void)
{
	long long catalan  (int n);
	long long faculteit(long long n);
	int getal;

	printf("\n\nWelkom\n");

	printf("\nVoer een geheel getal in : ");
	scanf("%d", &getal);

	catalan(getal);

	getchar();
	getchar();
}

long long catalan(int n)
{
	long long uitkomst;
	uitkomst = (faculteit(2 * n)) / (faculteit(n)*faculteit(n + 1));
	printf("\nUw berekende waarde is   : %d", uitkomst);
}

long long faculteit(long long n)
{
	long long i, res = 1;
	for (i = 1; i <= n; i = i + 1) {res = res * i;}
	return res;
}
