#include <stdio.h>

void f1(){
	for(int i=0;i<7;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
void f2(){
	int x = 1;
	for(int i=0;i<7;i++){
		for(int j=0;j<x;j++){
			printf("*");
		}
		x = (i<7/2)?x+1:x-1;
		printf("\n");
	}
}
void f3(){
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	f1();
	f2();
	f3();
}
