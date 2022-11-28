#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 

int main() {
    int n,s1,p1,s2,p2,s3,p3,x;
    printf("number");
scanf("%d",&n);
s1=0;
p1=1;
s2=0;
p2=1;
s3=0;
p3=1;
    for (x=1; x<=n; x++)
    {
        if (x%2==0) {
        s1=s1+x;
        p1=p1*x;
        }
        if (x%2!=0) {
        s2=s2+x;
        p2=p2*x;
        }
        if (x%3==0) {
        s3=s3+x;
        p3=p3*x;
        }
    }
        printf("a Result = %d   ",s1);
        printf("Result = %d   ",p1);
            printf("b Result = %d  ",s2);
        printf("Result = %d   ",p2);
            printf("c Result = %d   ",s3);
        printf("Result = %d   ",p3);
}