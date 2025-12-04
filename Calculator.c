#include<stdio.h>
int main() {
    double a , b;
    char op;
    
    printf("Enter an operator:\n");
    scanf("%c" , &op);
    
    printf("Enter two numbers:\n");
    scanf("%lf %lf" , &a , &b);
    
    switch(op) {
        case'+':
        printf("The sum of %.2lf and %.2lfis %.2lf" , a , b , a+b);
        break;
        
        case'-':
        printf("The difference of %.2lf and %.2lf is %.2lf" , a , b , a-b);
        break;
        
        case'*':
        printf("The multiplication of %.2lf and %.2lf is %.2lf" , a , b , a*b);
        break;
        
        case'/':
        if(b != 0)
        printf("The divion of %.2lf and %.2lf is %.2lf" , a , b , a/b);
        else
        printf("Error! Division by zero!\n");
        break;
        
        default:
        printf("Invalid operator!");
    }
    return 0;
}