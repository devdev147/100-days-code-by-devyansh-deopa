#include <stdio.h>
// Write a program to find the product of odd digits of a number.
int main()
{
    int n,p=1;
    printf("Enter Number : ");
     scanf("%d",&n);
    int n1=n;
    while(n!=0)
    {
        int d=n%10;
        if(d%2!=0)
        p=p*d;
        n=n/10;
    }
    printf("Product of odd digits of %d is %d",n1,p);
}