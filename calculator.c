#include <stdio.h>
int main()
{
    int a ,b,sum;
    char x;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    printf("enter + for addition and - for subtraction * for multiplication\n");
    scanf(" %c",&x);
    switch(x)
    {
        case '+':
        sum=a+b;
        printf("%d",sum);
        break;
        case '-':
        sum=a-b;
        printf("%d",sum);
        break;
        case '*':
        
    }
    
}