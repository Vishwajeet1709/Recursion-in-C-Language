//Recursive function to print first N even natural number
#include<stdio.h>
void PrintEven(int n)
{
    if(n>1)
        PrintEven(n-1);
    if((n%2)==0)
        printf(" %d",n);
}
int main()
{
    int n;
    printf("Enter a number to print first N even natural numbers : ");
    scanf("%d",&n);
    printf("\n\nFirst %d even natural numbers : ",n);
    PrintEven(n*2);
    printf("\n\n");
    return 0;
}
