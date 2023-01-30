//Recursive function to print square of first N natural numbers
#include<stdio.h>
void PrintSquN (int n)
{
    if(n>1)
        PrintSquN(n-1);

    printf(" %d",n*n);
}
int main()
{
    int n;
    printf("Enter a number to print square of first N natural numbers : ");
    scanf("%d",&n);
    printf("\n\nSquare of %d natural number(s) : ",n);
    PrintSquN(n);
    printf("\n\n");
    return 0;
}

