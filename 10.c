//Recursive program to print reverse of a number
#include<stdio.h>
void reverse (int n)
{
    if(n!=0)
        printf(" %d",n%10);
    if(n!=0)
        reverse(n/10);
}
int main()
{
    int n;
    printf("Enter a number to reverse its digits : ");
    scanf("%d",&n);
    printf("\n\n Reverse of %d is : ",n);
    reverse(n);
    return 0;
}
