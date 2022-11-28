#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
 
    int n, m, k, i, j;
    printf("Kol-vo strok: \n");
    scanf("%d", &n);
    printf("Kol-vo stolbcov: \n");
    scanf("%d", &m);
    int matr[30][30], stolb;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) 
        {
            printf("Vvedite [%d;%d] element matrici : ", i + 1, j + 1);
            scanf_s("%d", &matr[i][j]);
        }
    }
 
    int index = 0;
    int k = 0 ,j = 0, i = 0;
 
 
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (matr[i][j] > 0)
                k++;
            else
 
            {
                k = 0;
 
                break;
            }
        }
        if (k == m) {
            index = j + 1;
            break;
 
        }
    }
    printf("Nomer stolbca so vsemi polojitel'nimi chislami : %d \n", index);
 return 0;

}
    