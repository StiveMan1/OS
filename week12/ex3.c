// Use sudo if 
#include <stdio.h>
#include <stdlib.h>

#include <linux/input.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>

int main() {
    int fd = open("/dev/input/by-path/platform-i8042-serio-0-event-kbd", O_RDONLY);
    FILE *out = fopen("./ex2.txt", "w");
    if (fd == -1) return 0;
    struct input_event evt;
    int chars[256];
    for(int i=0;i<256;i++){
    	chars[i] = 0;
    }
    while (1) {
        read(fd, &evt, sizeof(evt));
        if(evt.type == EV_KEY && (evt.value == 1 || evt.value == 0)){
		chars[(int)evt.code] = (int)evt.value;
		if(chars[18] && chars[25]) printf("I passed the Exam!\n");
		if(chars[30] && chars[25] && chars[46]) printf("Get some capuccino!\n");
		if(chars[18] && chars[32] && chars[23]) printf("Let me die\n"); //die
		if(chars[19] && chars[31] && chars[21]) printf("Sorry\n"); //sry
		if(chars[25] && chars[38] && chars[44]) printf("please\n"); //plz
        }
        fflush(out);
    }
    fclose(out);
    return 0;
}
