#include <stdio.h>
// Program to check if a number is a strong number
int main()
{
    // Variable declaration
    int n,i,d,N,f=0;  
    // Input a number from user
    printf("Enter N : ");
     scanf("%d",&N);
    n=N;
    
    while(n!=0)//until n becomes 0
    {
        // Extract last digit
        int fact=1;
        d=n%10;
        for(i=1;i<=d;i++)
        fact=fact*i;
        f=fact+f;
        n=n/10;
    }
    if(f==N)
    printf("Strong Number");
    else
    printf("Not A Strong Number");
}