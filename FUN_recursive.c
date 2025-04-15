#include<stdio.h>
void fun(int n)
{
    if (n==0){
    //base case
    return;
    }
    else{
    printf("%d\t",n);
    //recursive add
    fun(n-1);
    }
    
    
}
int main()
{
    fun(5);
    return 0;
}
