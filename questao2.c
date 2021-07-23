#include <stdio.h>
#include <stdlib.h>

int uniao(int *vetor1, int a, int *vetor2, int b, int *vetor3); 

int main(){
	int i, a, b, count, *vetor3;
	scanf("%d %d", &a, &b);
	int vetor1[a], vetor2[b];

	for (i = 0; i < a; i++){
		scanf("%d", &vetor1[i]);
        }
	for (i = 0; i < b; i++){
		scanf("%d", &vetor2[i]);
        }
	vetor3 = (int*) malloc((a + b) * sizeof(int));

	if (vetor3 == NULL) {
		fprintf(stderr, "error: memory not allocated");
		return 1;
	}
	count = uniao(vetor1, a, vetor2, b, vetor3);
	for (i = 0; i < count; i++){
		printf("%d\n", *(vetor3 + i));
        }
	free(vetor3);

	return 0;
}

int uniao(int *vetor1, int a, int *vetor2, int b, int *vetor3){
	int i;

	for (i = 0; i < a; i++){
		*(vetor3 + i) = vetor1[i];
        }
	for (i = 0; i < b; i++){
		*(vetor3 + a + i) = vetor2[i];
        }
	return a + b;
}
