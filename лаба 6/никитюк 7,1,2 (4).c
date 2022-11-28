#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	const int n = 8; 
	int m[6];
	int sum = 0; 
	int m1[2];
	int j = 0;
	int sum2 = 0; 
	int p;
	int min;
    int w;
    int max;
 	
	printf(" исходный массив ");
 
	for (int i = 0; i < n; i++)
		printf(" %d", m[i]);
 

	for (int i = 0; i < 7; i++)
		if(m[i]<0)
			sum += m[i];
			printf("\n summa otricatelnih elementov = %d", sum);	

	for (int i = 0; i < 7; i++)
		if(m[i]<0){
			m1[j]=i;
			p=j+1;
			printf("\n");
			printf("index %d = %d", p, m1[j]);
			j=j+1;
		}

	for (int i = m1[0]+1; i < m1[1]; i++)
		sum2 += m[i];
		printf("\n summa polozitelnih elementov = %d", sum2 );	
	
	min =m[0];

    max=m[0];

    for (w=1; w<10; w++)

    {

    if (m[w]<min){min=m[w];};


    if (m[w]>max){max=m[w];};

    }

    printf("\nМаксимальное значение %d\n",max);

    printf("Минимальное значение %d\n",min);
    int l;
    int proiz;
    for (l=min+1; l< max; l++)
        proiz *= m[l];
        printf("Произведение %d ", proiz);
        
return 0;
}

