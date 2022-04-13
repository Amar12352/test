#include <stdio.h>
#include <stdlib.h>

int main()
{
     float num1,num2;
    char op;
printf("Enter Your Operator (*,/,-,+) \n");
scanf("%c",&op);
 printf("Enter Your First Num \n");
 scanf("%f",&num1);

  printf("Enter Your scound Num \n");
scanf("%f",&num2);

switch(op)
{
case '-':
    printf("num1+num2 = %f",num1+num2);
    break;

    case '-':
    printf("num1-num2 = %f",num1-num2);
    break;

    case '/':
    printf("num1/num2 = %f",num1/num2);
    break;
    case '*':
    printf("num1*num2 = %f",num1*num2);
    break;
default:
        printf("no");

}
    return 0;
}
