#include <stdio.h>
#include "string.h"
#include <pthread.h>
#include <stdlib.h>

void *function_1(void* arg){
	printf("Thread ID: %lu |\t%s \n", pthread_self(), (char*)arg);
}

int main(int argl, char* args[]){
	if(argl == 1){
		args = (char**)malloc(sizeof(char*));
		args[0] = "You can add arguments";
		argl ++;
	}
	pthread_t _thread;
	
	for(int i=1;i<argl;i++){
		pthread_create(&_thread, NULL, function_1, (void *)args[i]);
		printf("Created Thread ID : %lu\n", _thread);
		pthread_join(_thread, NULL);
		
	}
	return 0;
}
