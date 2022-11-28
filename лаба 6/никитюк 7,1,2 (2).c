#include <iostream>

#include <stdio.h>

#include <string.h>

#include <windows.h>

using namespace std;

struct sklad 

{char name[30]; 

char ed[5]; 
float cena; 

int kol;

int date; 

int type; 

};

struct sklad mas[30]; 

struct sklad tmp; 

int sch=0; 

int er; 

void enter_new();

int menu();

void out();

void del();

void change();

void find();

int main()

{

setlocale(LC_ALL,"Russian");

while(1)

{ switch(menu())

{ case 1:del();break;

case 2:enter_new();break;

case 3:change();break;

case 4:out();break;

case 5:find();break;

case 6: return 0;

default: cout<<"Ne verniy vibor/n";

}

}

}

void enter_new() 

{

if(sch<30)

{

cout<<"Zapis nomera"<<sch+1;



cout<<"\nVvedite registracionniy nomer\n";

cin>>mas[sch].name;

cout<<"Vvedite probeg \n";

cin>>mas[sch].ed;

cout<<"Vvedite summu remonta\n";

cin>>mas[sch].cena;

cout<<"Vvedite imya mastera\n";

cin>>mas[sch].kol;

cout<<"Vvedite marku\n";

cin>>mas[sch].date;

sch++; 

}

else cout<<"Введено максимальное кол-во записей";

}

int menu()

{

int er;

cout<<"Введите:\n";

cout<<"1-для удаления записи\n";

cout<<"2-для ввода новой записи\n";

cout<<"3-для изменения записи\n";

cout<<"4-для вывода записи(ей)\n";

cout<<"5-для поиска \n";

cout<<"6-для выхода\n";

cin>>er;

return er;

}

void out() /

{

int sw; 

int k; 

if (sch==0)//если счетчик количества структур равен 0

cout<<"\nНет запичей: \n";

else

{

cout<<"\nВведите: \n";

cout<<"1-если хотите вывести какую-либо запсь\n";

cout<<"2-если хотите вывести все записи\n";

cin>>sw;

if(sw==1)

{

cout<<"Введите номер записи, которую нужно вывести\n";

cin>>k;

cout<<endl;

if (mas[k-1].type==1)

cout<<"Приход"<<endl;

else

cout<<"Отгрузка"<<endl;

cout<<"Наименование:"<<mas[k-1].name<<endl;

cout<<"Ед.измер.:"<<mas[k-1].ed<<endl;

cout<<"Цена:"<<mas[k-1].cena<<endl;

cout<<"Кол-во:"<<mas[k-1].kol<<endl;

cout<<"Дата:"<<mas[k-1].date<<endl;

cout<<"____________"<<endl;

}

if(sw==2)

{ for(int i=0;i<sch;i++) 

{if (mas[i].type==1)

cout<<"Приход"<<endl;

else

cout<<"Отгрузка"<<endl;

cout<<"Наименование:"<<mas[i].name<<endl;

cout<<"Ед.измер.:"<<mas[i].ed<<endl;

cout<<"Цена:"<<mas[i].cena<<endl;

cout<<"Кол-во:"<<mas[i].kol<<endl;

cout<<"Дата:"<<mas[i].date<<endl;

cout<<"____________"<<endl;

}

}

}

}

void del() 

{ int d; 

cout<<"\nВведите номер записи, которую необходимо удалить\n";

cout<<"Если необходимо удалить все записи,нажмите '99'\n";

cin>>d;

if (d!=99)

{ for (int i=(d-1);i<sch;i++)

mas[i]=mas[i+1];

sch=sch-1;

}

if (d==99)

{ for(int i=0;i<30;i++)

mas[i]=tmp; 

sch=0; 

}

}

void change() 

{ int c;

int per;

cout<<"\nВведите номер записи\n";

cin>> c;

do

{cout<<"Введите: \n";

cout<<"1-для изменения типа накладной\n";

cout<<"2-для изменения наименования\n";

cout<<"3-для изменения ед.измерения\n";

cout<<"4-для изменения цены\n";

cout<<"5-для изменения количества\n";

cout<<"6-для изменения даты\n";

cout<<"7-для прекращения\n";

cin>>per;

switch (per)

{ case 1: cout<<"\nВведите новый тип накладной (1 - приход, 2 - отгрузка)\n";

cin>>mas[c-1].type;

break;

case 2:

cout<<"\nВведите новое наименование\n";

cin>>mas[c-1].name;

break;

case 3:

cout<<"Введите новые ед.измерения \n";

cin>>mas[c-1].ed;

break;

case 4:

cout<<"Введите новую цену\n";

cin>>mas[c-1].cena;

break;

case 5:

cout<<"Введите новое кол-во\n";

cin>>mas[c-1].kol;

break;

case 6:

cout<<"Введите новую дату последнего поступления\n";

cin>>mas[c-1].date;

break;

case 7: return;

}

}while(1);

}

void find() //ф-ция поиска записей

{

int sw; // переключатель

if (sch==0)

cout<<"\nНет запичей: \n";

else

{

cout<<"\nВведите: \n";

cout<<"1-все накладные прихода\n";

cout<<"2-все накладные отгрузки\n";

cin>>sw;

for(int i=0;i<sch;i++) 

if (mas[i].type==sw)

{

if (mas[i].type==1)

cout<<"Приход"<<endl;

else

cout<<"Отгрузка"<<endl;

cout<<"Наименование:"<<mas[i].name<<endl;

cout<<"Ед.измер.:"<<mas[i].ed<<endl;

cout<<"Цена:"<<mas[i].cena<<endl;

cout<<"Кол-во:"<<mas[i].kol<<endl;

cout<<"Дата:"<<mas[i].date<<endl;

cout<<"____________"<<endl;

}

}

}

