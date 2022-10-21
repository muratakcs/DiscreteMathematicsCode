#include "stdio.h"
int count;
void toh(int from, int to, int nod) {
  if(nod==1) {
    printf("Move disk 1 from %d to %d\n",from,to);
    count++;
  }
  else {
    toh(from, 3-from-to, nod-1);
    printf("Move disk %d from %d to %d\n",nod, from, to);
    count++;
    toh(3-from-to, to, nod-1);
  }
}

int main() {
  count = 0;
  toh(0,2,9);
  printf("count=%d\n",count);
  return 0;
}
