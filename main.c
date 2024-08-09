#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,divi;
    char op;
    printf("Enter the operator");
    scanf("%c",&op);
    printf("Enter the operands");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+':
        sum=a+b;
        printf("%d",sum);
        break;
        case '-':
        sub=a-b;
        printf("%d",sub);
        break;
        case '*':
        mul=a*b;
        printf("%d",mul);
        break;
        case '/':
        divi=a/b;
        printf("%d",divi);
        break;
        default:
        printf("Invalid");
        
    }
    
}