#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void bubble_sort(int length, int* array){
	for(int i=0;i<length;i++){
		for(int j=0;j<length-i-1;j++){
			if(array[j] > array[j+1]) swap(&array[j], &array[j+1]);
		}

	}
}


int main(){
	int* a;
	a = malloc(10 * sizeof(int));
	for(int i=0;i<10;i++){
		a[i] = 10 - i;
	}
	bubble_sort(10, a);
	for(int i=0;i<10;i++){
		printf("%d ", a[i]);
	}
	free(a);
}

