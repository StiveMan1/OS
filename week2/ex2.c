#include<stdio.h>
#include<string.h>

int main(int args, char *argv[]){
	if(args < 2){
		printf("Please Add your String as argumnet\n");
		return -1;
	}
	int _len = strlen(argv[1]);
	while(_len--){
		printf("%c", argv[1][_len]);
	}
	printf("\n");
}
