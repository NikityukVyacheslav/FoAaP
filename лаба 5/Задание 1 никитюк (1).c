#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 

int main() {
int i,j,m,n,c;
c=0;
scanf("%i",&m);
scanf("%i",&n);
float b[m][n];
for (i=0;i<n;i++){
for (j=0;j<m;j++)
{
printf("Vvedite element [%d,%d]\n", i+1, j+1);
scanf("%f",&b[i][j]);
}
}
for (j=0;j<m;j++)
{
for (i=0;i<n;i++){
    if (b[i][j]>0)
    c++;
    else c=0;
}
if (c==n & j==0){
printf("это первый столбец");
break;}
else if (c==n){
printf(" столбец %d", j+1);
for (i=0;i<n;i++){
    b[i][j-1]=-b[i][j-1];
}
break;
}
}
printf("  MATRICA: \n");
for (i=0;i<n;i++)
{
for (j=0;j<m;j++)
printf(" %.f", b[i][j]);
printf("\n");
}
}
