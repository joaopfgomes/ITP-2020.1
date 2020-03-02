#include <stdio.h>

int main(int argc, char const *argv[]){
	int n;
	int diferenca;
	int contador = 0;
	int anterior;
	int atual;

	scanf ("%i", &n);
	int v[n];

	scanf("%i", &anterior);
	scanf("%i", &atual);
	diferenca = atual - anterior;
	for (int i = 2; i < n; ++i){
		int dif_atual = atual - anterior;
		if (diferenca != dif_atual){
			diferenca = dif_atual;
			contador++;
		}
		anterior = atual;
		scanf("%i", &atual);
	}
 	
 	if(n > 1){
 	diferenca = v[1] - v[0];
	for (int i = 0; i < n; ++i){
		int dif_atual = v[i] - v[i-1];
		if (diferenca != dif_atual){
			diferenca = dif_atual;
			contador++;
		}
	}
 }
 printf("%i\n", contador);

	return 0;
}
