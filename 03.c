//Recursive function to print first N odd natural number
#include<stdio.h>
void PrintOdd(int n)
{
    if(n>1)
        PrintOdd(n-1);
    if((n%2)!=0)
        printf(" %d",n);
}
int main()
{
    int n;
    printf("Enter a number to print first N odd natural numbers : ");
    scanf("%d",&n);
    printf("\n\nFirst %d odd natural numbers : ",n);
    PrintOdd(n*2);
    printf("\n\n");
    return 0;
}
