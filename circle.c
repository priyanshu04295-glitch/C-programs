#include<stdio.h>
void main()
{
    float r;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    float perimeter = 2 * 3.14 * r;
    float area = 3.14 * r * r;
    printf("Perimeter : %f\n",perimeter);
    printf("Area : %f\n",area);
}