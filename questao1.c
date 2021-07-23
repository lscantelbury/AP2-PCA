#include <stdio.h>
#define MAX 150

int has_val(int *vec, int size, int val){
	int i;
	for (i = 0; i < size; i++){
		if (vec[i] == val){
			return 1;
		}
	}
	return 0;
}

int intersec(int *vec1, int *vec2, int *res){
	int i;
	int count = 0;
	for (i = 0; i < MAX; i++){
		if (has_val(vec2, MAX, vec1[i])){
			res[count] = vec1[i];
			count++;
		}
	}

	return count;
}
int main(){
	int i, aux; 
	int vetor1[MAX], vetor2[MAX], vetor3[MAX];
	for (i = 0; i < MAX; i++){
		scanf("%d", vetor1 + i);
        }
	for (i = 0; i < MAX; i++){
		scanf("%d", vetor2 + i);
        }
	aux = intersec(vetor1, vetor2, vetor3);

	for (i = 0; i < aux; i++){
		printf("%d\n", vetor3[i]);
        }
	return 0;
}
