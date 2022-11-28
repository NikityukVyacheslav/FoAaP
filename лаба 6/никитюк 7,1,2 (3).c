#include <stdio.h> 
#include <conio.h> 
int main()
{
    float matr[30][30];
    int n, m; 
    int i, j;
 
    printf("Enter the number of lines: ");  
    scanf("%d", &n);
    printf("Enter the number of columns: ");  
    scanf("%d", &m);
 
    if (n != m)
    {
        printf("The matrix isn't magic box");
        _getch();
        return 0; // выходит из программы
    }
    printf("Enter the elements the matrica:\n");
    for (i = 0; i < n; i++)
    {
        // ввод матрицы 
        for (j = 0; j < m; j++)
        {
            scanf("%f", &matr[i][j]);
        }
    }
    float rowSums[30]; 
    float colSums[30]; 
    float leftDiag = 0;
    float rightDiag = 0;
    for (int i = 0; i < n; i++)
    {
        rowSums[i] = 0;
        colSums[i] = 0;
        for (int j = 0; j < m; j++)
        {
            rowSums[i] += matr[i][j];
            colSums[i] += matr[j][i];
            if (i == j)
            {
                leftDiag += matr[i][j];
            }
            if (j == m - i - 1)
            {
                rightDiag += matr[i][j];
            }
        }
    }
 
    bool check = true;
    if (leftDiag != rightDiag)
    {
        check = false;
    }
 
    for (int i = 0; i < n - 1; i++)
    {
        if (rowSums[i] != rowSums[i + 1] || colSums[i] != colSums[i + 1])
        {
            check = false;
            break;
        }
    }
 
    if (leftDiag != rowSums[0] || rowSums[0] != colSums[0])
    {
        check = false;
    }
 
    if (check)
    {
        printf("The matrix is a magic box");
    }
    else
    {
        printf("The matrix isn't a magic box");
    }
    _getch();
}