// area of a triangle
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, s;
    float area;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Enter the value of c:");
    scanf("%f", &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is %f", area);
    return 0;
}