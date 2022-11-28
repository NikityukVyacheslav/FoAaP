#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 

int main() {
    int n,i,k,m;
    printf("Число");
scanf("%d",&n);
int a[n];
k=0;
for(i=0; i<n; i++) {
printf("a[%d] = ", i);
scanf("%d", &a[i]);
if (a[i]<0) {
    k=k+1;
}
}
m=n-k;
int b[k];
int c[m];
k=0;
m=0;
for(i=0; i<n; i++) {
if (a[i]<0) {
    b[k]=a[i];
    printf("отрицательыне %d ",b[k]);
    k++;
}
    else {
        c[m]=a[i];
        printf("остальные %d ",c[m]);
        m++;
    }

}
}