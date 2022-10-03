#include "stdio.h"
#include "stdlib.h"

int stat[] = {0,0};

int play() {
    int box[] = {10,10};
    int sb;
    while(1) {
        sb = rand()%2;
        stat[sb]++;
        if(box[sb]==0) {
            return box[1-sb];
        }
        else {
            box[sb]--;
        }
    }
    
}

int main() {
    srand((unsigned int)time(NULL));
    int num_trials = 100000000;
    int i;
    int count[] = {0,0,0,0,0,0,0,0,0,0,0};
    for(i=0; i<num_trials; i++) {
        count[play()]++;
    }
    printf("%d/%d=%f\n", count[5],num_trials,(double)count[5]/num_trials);
    for(i=0; i<=10; i++) {
        printf("%d\t",count[i]);
    }
    printf("%d, %d\n",stat[0],stat[1]);
    return 0;
}