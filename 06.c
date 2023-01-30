//Recursive function to print first N even natural number in reverse order
#include<stdio.h>
void PrintRevEven(int n)
{
    if((n%2)==0)
        printf(" %d",n);
    if(n>1)
        PrintRevEven(n-1);
}
int main()
{
    int n;
    printf("Enter a number to print first N even natural numbers in reverse order: ");
    scanf("%d",&n);
    printf("\n\nFirst %d Even natural numbers in reverse order : ",n);
    PrintRevEven(n*2);
    printf("\n\n");
    return 0;
}


