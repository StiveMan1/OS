#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
   while(1){
     	char buffer [32];
     	char *b = buffer;
    	size_t bufsize = 32;
	size_t characters;
   	characters = getline(&b, &bufsize, stdin);
  	system(buffer); 
   }
   return 0;
}


