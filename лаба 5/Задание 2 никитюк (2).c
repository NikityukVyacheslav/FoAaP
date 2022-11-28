#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 

int main() {
int i,j,m,n,c,k,sum,x;
c=0;
m=8;n=8;
float b[m][n];
for (i=0;i<n;i++){
for (j=0;j<m;j++)
{
printf("Vvedite element [%d,%d]\n", i+1, j+1);
scanf("%f",&b[i][j]);
}
}
c=0;
for (i=0;i<n;i++){
for (j=0;j<m;j++){
if (b[i][j]==b[j][i])
c++;
if (c==8){
    printf("k= %d  ",i+1);
    break;
}

}
}
k=0;
sum=0;
for (i=0;i<n;i++){
for (j=0;j<m;j++){
    if (b[i][j]<0){
       for (x=0;x<m;x++){
           sum=sum+b[i][x];
       }
            break;    
        }
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