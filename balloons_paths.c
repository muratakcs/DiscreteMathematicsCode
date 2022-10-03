#include "stdio.h"

int t[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int u; //num 1s
int r; //num 2s

int count[] = {0,0,0,0,0,0,0,0,0,0,0};

void putnext(int pos) {
    //trying 1
    t[pos] = 1;
    u++;
    if(u==11) {
        count[r]++;
    }
    else {
        putnext(pos+1);
    }
    t[pos] = 0;
    u--;


    //trying 2
    t[pos] = 2;
    r++;
    if(r==11) {
        count[u]++;
    }
    else {
        putnext(pos+1);
    }
    t[pos] = 0;
    r--;
}

int main() {
    putnext(0);
    int i;
    int sum = 0;
    for(i=0; i<=10; i++) {
        printf("%d: %d \n",i,count[i]/2);
        sum += count[i]/2;
    }
    printf("%d\n",sum);
    printf("%f\n",(double)count[5]/sum/2);
}