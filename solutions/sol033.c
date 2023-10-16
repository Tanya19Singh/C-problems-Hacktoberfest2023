#include<stdio.h>
int main()
{
    //Relational operators are used for the comparison of two values to understand the type  of relationship a pair of number shares eg:less than(<),greater than(>),equal to(==),less than or equal to(<=),greater than or equal to(>=)
    // Prompt the user to enter a pair of number 
    printf("Enter a pair of number to check relationship between them: ");
    int a,b;
    scanf("%d%d", &a,&b);

    //greater than exammple
    if(a>b)
    printf("a is greater than b\n");
    else
    printf("a is less than or equal to b\n");

    //less than or equal to example
    if(a<=b)
    printf("a is less than or equal to b\n");
    else
    printf("a is greater than b\n");

    //equal to example
    if(a==b)
    printf("a is equal to b\n");
    else
    printf("a is not equal  to b\n");

    return 0;
}