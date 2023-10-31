#include <stdio.h>
int main()
{
    int a ,b,result;
    char x;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    printf("enter + for addition \n - for subtraction \n* for multiplication \n / for divsion\n");
    scanf(" %c",&x);
    switch(x)
    {
        case '+':
        result=a+b;
        printf("%d",result);
        break;
        case '-':
        result=a-b;
        printf("%d",result);
        break;
        
        default:
    
        
    }
    
}