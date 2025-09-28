#include <stdio.h>
// Program to check if a number is a perfect number
int main()
{
    int n,sum=0;
    // Input a number from user
    printf("Enter +ve Number : ");
     scanf("%d",&n);
    // Check for valid input
    if(n<=0)
    {
        printf("Please enter valid input");
        return 0;
    }
    // Calculate sum of factors
    for(int i=n/2;i>0;i--)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(n==sum)
    printf("%d is a perfect number\n",n);
    else
    printf("%d is not a perfect number\n",n);
}