//recursive function to print first n natural number in reverse order
#include<stdio.h>
void ReverseN (int n)
{
    printf(" %d",n);
    if(n>1)
    ReverseN(n-1);
}
int main()
{
    int n;
    printf("Enter a number to print first N natural numbers : ");
    scanf("%d",&n);
    printf("\n\n%d natural number(s) in reverse order : ",n);
    ReverseN(n);
    printf("\n\n");
    return 0;
}
