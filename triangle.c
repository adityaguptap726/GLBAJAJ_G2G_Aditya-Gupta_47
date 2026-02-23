#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter length of sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if (a == b && b == c)
    { printf("The triangle is Equilateral");}
    else if (a == b || b == c || a == c)
    {printf("Thge triangle is Isoceles");}
    else {printf("The triangle is Scalene");}
    return 0;

}
    
    