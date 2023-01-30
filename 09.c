//Recursive function to print octal of a given number
#include<stdio.h>
void PrintOctal(int n)
{
    if(n!=0)
        PrintOctal(n/8);
    if(n!=0)
    printf(" %d",n%8);
}
int main()
{
    int n;
    printf("Enter a decimal number to convert it into octal number system : ");
    scanf("%d",&n);
    printf("\n\n Octal of %d is : ",n);
    PrintOctal(n);
    printf("\n\n");
    return 0;
}
