#include<stdio.h>
int fac(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*fac(n-1);
}


int main()
{
    int n;
    printf("Enter the number you want to find the factorial\n:");
    scanf("%d",&n);
    int result =fac(n);
    printf("The factorial of %d is :%d",n,result);
    return 0;
}
