#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 
int main() {

int x;
printf("Введите название старны : 1-США 2-Бразилия 3-ЮАР 4-Белорусь 5-Австралия\n");
scanf("%d",&x);
switch(x)
    {
        case 1: printf("N-America");break;
        case 2: printf("S-America");break;
        case 3: printf("Africa");break;
        case 4: printf("Eurasia");break;
        case 5: printf("Australia and oceania");break;
        default: printf("Нет такой страны в списке");
    }
}