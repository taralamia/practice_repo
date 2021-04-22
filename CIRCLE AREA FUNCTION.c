#include<stdio.h>

double circle0fArea(double radius);
double circle0fDiameter(double radius);
double circle0fPerimeter(double radius);

int main()
{
    double r,area,dm,pm;

 printf("Enter the radius: ");
 scanf("%lf",&r);

 area=circle0fArea(r);
 dm=circle0fDiameter(r);
 pm=circle0fPerimeter(r);

 printf("Area=%.2lf\n",area);
 printf("Diameter=%.2lf\n",dm);
 printf("Perimeter=%.2lf\n",pm);

 return 0;
}
double circle0fArea(double radius)
{
    return 3.14*radius*radius;
}
double circle0fDiameter(double radius)
{
    return 2*radius;
}
double circle0fPerimeter(double radius)
{
    return 2*3.14*radius;
}
