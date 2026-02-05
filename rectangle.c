#include<stdio.h>
void main()
{
    float length,breadth;
    scanf("%f%f",&length,&breadth);
    float perimeter = 2*(length+breadth);
    float area = length*breadth;
    printf("The perimeter of the rectangle is : %f\n",perimeter);
    printf("The area of the rectangle is : %f",area);
}