#include <stdio.h>

int main(){
    int x,m,y;
    x = 8;
    m = 6;

    y = x * 2 < m + 4 ? 4 * m : 8 * m;
    printf("y is : %d", y);
}