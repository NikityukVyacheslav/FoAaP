#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 
int main() {

int x,a,b,c;
printf("A:");
scanf("%d",&a);
printf("B:");
scanf("%d",&b);
printf("C:");
scanf("%d",&c);
if (a==b || b==c || c==a) printf("Равнобедренный");
    else printf("Net");
return(0);
}