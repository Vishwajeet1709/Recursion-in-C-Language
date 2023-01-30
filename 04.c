//Recursive function to print first N odd natural number in reverse order
#include<stdio.h>
void PrintRevOdd(int n)
{
    if((n%2)!=0)
        printf(" %d",n);
    if(n>1)
        PrintRevOdd(n-1);
}
int main()
{
    int n;
    printf("Enter a number to print first N odd natural numbers in reverse order: ");
    scanf("%d",&n);
    printf("\n\nFirst %d odd natural numbers in reverse order : ",n);
    PrintRevOdd(n*2);
    printf("\n\n");
    return 0;
}

