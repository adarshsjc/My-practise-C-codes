
#include<stdio.h>
// function prototype
//A function prototype tells the compiler what a function looks like before its actual definition appears in the code.

//It includes:

//The function name

//The return type

//The number and type of parameters

//It ends with a semicolon (;) and is usually written at the top of the program or before main().

void display (int,float,char);
//Function call
int main()
{
    int num=20;
    float decimal=2.86;
    char word='A';
     display(num,decimal,word);
    return 0;
}
//Function Definition
void display(int x,float y,char z)
{
    printf("The integer number is:%d\n",x);
    printf("The decimal is :%.2f\n",y);
    printf("The word is :%c\n",z);
}
