//Recursive function to print first N natural numbers
#include<stdio.h>
void PrintN (int n)
{
    if(n>1)
        PrintN(n-1);

    printf(" %d",n);
}
int main()
{
    int n;
    printf("Enter a number to print first N natural numbers : ");
    scanf("%d",&n);
    printf("\n\n%d natural number(s) : ",n);
    PrintN(n);
    printf("\n\n");
    return 0;
}
