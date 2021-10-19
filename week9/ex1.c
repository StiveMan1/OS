#include <stdio.h>


int n = 100, a;
int used[10000][2];
int main() {
	FILE *in_file  = fopen("input.txt", "r");
	int i=0;
	int hit = 0, miss = 0;
	while(fscanf(in_file,"%d", &a)==1){
		i++;
        	int pos = -1, new_pos = 0;
        	for(int j=0;j<n;j++){
            		if(used[j][0] == a){
                		pos = j;
            		}
            		if(used[new_pos][1] > used[j][1]){
                		new_pos = j;
            		}
        	}
        
        	if(pos != -1){
            		used[pos][1] = i;
            		hit++;
        	}else{
            		used[new_pos][1] = i;
            		used[new_pos][0] = a;
            		miss++;
        	}
    	}
    	double result = ((double)hit)/((double)miss);
	printf("%f\n", result);
}
// 10 - 0.010101
// 50 - 0.0582011
// 100 - 0.101322 

