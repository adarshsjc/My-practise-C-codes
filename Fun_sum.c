#include <stdio.h>
int add (int a,int b)
{
    int sum=a+b;
    return sum;
}

int main()
{ 
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d %d",&a ,&b);
    int result = add (a,b);
    printf("The result is:%d",result);
    return 0;
}
