#include <stdio.h>
//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
int main()
{
    int n,i;
    float sum=0.0;
    // Input number of terms from user
    printf("Enter number of terms : ");
     scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        float numerator=2*i; // Even numbers: 2, 4, 6, 8, ...
        float denominator=3+(i-1)*4; // Denominators: 3, 7, 11, 15, ...
        sum=sum+(numerator/denominator);
    }
    // Print the result
    printf("Sum of series up to %d terms is %.2f",n,sum);
}