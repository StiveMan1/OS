#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
   while(1){
      char * str;
      scanf("%s", str);
      system(str);
   }
   return 0;
}

