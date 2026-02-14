#include <stdio.h>

int main(){
    int x,y,m,k;
    x = 8;
    y = 10;
    m = 6;

    k = x / 4 * (y / 2) * m;
    printf("k1 is %d\n",k);

    k = x / y++ +y /--m;
    printf("k2 is %d\n",k);
}