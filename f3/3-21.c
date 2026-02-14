#include <stdio.h>
int num1,num2,result,op;

int main(){

    printf("enter num 1: ");
    scanf("%d",&num1);


    printf("enter operator ( + , - , / , * ): ");
    op = getche();


    printf("\nenter num 2: ");
    scanf("%d",&num2);


  switch (op)
            {
                case '+':
                    result = num1 + num2;
                    printf("\n%d + %d = %d\n", result,num1,num2);
                    break;
                case '-':
                    result = num1 - num2;
                    printf("\n%d / %d = %d\n", result,num1,num2);
                    break;
                case '/':
                case '\\':
                    result = num1 / num2;
                    printf("\n%d / %d = %d\n", result,num1,num2);
                    break;
                case '*':
                    result = num1 * num2;
                    printf("\n%d * %d = %d\n", result,num1,num2);
                    break;
            }
}