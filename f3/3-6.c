#include <stdio.h>
#include <conio.h>

int main(){
    long int fact;
    int i,num;
    clrscr();
    for(;;){
        printf("\nType a number: ");
        scanf("%d",&num);
        fact = 1;
        for(i = 1; i <= num; i++){
            fact *=i;
            printf("Factorial is: %ld", fact);}
    }
}