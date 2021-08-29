#include <stdio.h>
#define endl printf("\n");
#define spaces(x); for(int i=0;i<x;i++) printf(" ");
#define stars(x); for(int i=0;i<x;i++) printf("*");

int main(){
	int a;
	scanf("%d", &a);
	for(int j=0;j<a;j++){
		spaces(a-j);
		stars(2*j -1);
		endl
	}
}
