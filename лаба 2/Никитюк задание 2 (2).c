#define M_PI       3.14159265358979323846
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 
int main() {

int x,a,b;
printf("площадь круга:");
scanf("%d",&a);
printf("площадь квадрата");
scanf("%d",&b);
if (sqrt(4*a/M_PI)>sqrt(b)) printf("квадрат в круг");
    else printf("круг квадрат");
return(0);
}
