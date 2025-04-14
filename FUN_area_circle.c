#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

float area(float a)
{
   float result=M_PI*a*a;
    return result;
    
}
int main()
{
    float b,a;
    printf("enter the radius of the circle:\n");
    scanf("%f",&a);
    b=area(a);
    
    printf("The area of the circle:%.2f\n",b);
    return 0;
    
}
