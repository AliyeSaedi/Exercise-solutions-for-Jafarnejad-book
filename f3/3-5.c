#include <stdio.h>

int main(){
    int i,j,x;

    for (i = 2; i < 10; i++)
    {
        for (j = 2; j < 10; j++)
        {
            x = i * j;
            printf("%d * %d = %d\t",i,j,x);
        }   
    }   
}