#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 

int main() {
    int n,b,c,g,f;
    n=3000;
    b=160;
    c=130;
    g=n/b;
    f=(n-b*g)/c;
    if (f==0) printf("net");
     else if (n-(b*g+c*f)==0) printf("da");
     else printf("net");
    
}