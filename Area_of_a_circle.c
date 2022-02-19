#include<stdio.h>
#include<math.h>
int main()
{
    float area,r;
    float pi=3.14;
    scanf("%f",&r);
    area=pi*pow(r,2);
    printf("%.2f",area);
}