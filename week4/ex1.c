#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    int n;   
    for(int i = 0 ; i < 10; i++){
    
    	if (pid > 0)
          printf("Hello from parent [%d - %d]\n", pid, n);
        else if(pid == 0)
          printf("Hello from child [%d - %d]\n", pid, n);
	else
	  return 1;

    }
  return 0;
}

