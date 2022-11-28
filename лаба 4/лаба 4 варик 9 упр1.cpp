#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 

int main() {
    int n,i,k,m;
    
int a[10];
k=0;
for(i=0; i<10; i++) {
printf("a[%d] = ", i);
scanf("%d", &a[i]);
}
 for (i=4-1; i>=1; i--)
        for (int j=0; j<i; j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
        for (i=9; i>=5; i--)
        for (int j=5; j<i; j++)
        {
            if(a[j]<a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    for(i=0;i<10;i++) {
printf("%d ",a[i]); 
}
}