//Recursive function to print binary of a given number
#include<stdio.h>
void PrintBinary (int n)
{
    if(n!=0)
        PrintBinary(n/2);
    if(n!=0)
    printf(" %d",n%2);
}
int main()
{
    int n;
    printf("Enter a decimal number to convert it into binary : ");
    scanf("%d",&n);
    printf("\n\n Binary of %d is : ",n);
    PrintBinary(n);
    printf("\n\n");
    return 0;
}
