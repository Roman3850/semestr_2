#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct Book{
    int page;
    string genre,author;
};

void slosh(short* &v,short* &c);
void swap(short* &v,short* &c);
void massiv(short* k,short n);
void obj(Book* &m, int j);
void them(string &x);
void people(string &y);

int main()
{
    srand(time(0));

    /*Объявить указатели на две переменные указанного типа. Используя указатели
    произвести операции сложения и вычитания над переменными. Вывести адреса
    указателей.*/

    /*short a=2,b=3;
    short* p=nullptr;
    short* o=nullptr;
    p=&a;
    o=&b;
    slosh(p,o);*/

    /*Написать функцию для обмена значений переменных, указанных выше. Передача по
    указателю. Выполнить программу по шагам и выписать в тетрадь адреса указателей
    и величины переменных.*/

    /*swap(p,o);
    delete p;
    delete o;/*

    /*Объявить динамический массив. Размер массива задаёт пользователь. Заполнить
    массив случайными числами. Вывести на экран адреса и значения элементов
    массива.*/

    /*short n;
    cout<<"razmer massiva"<<endl;
    cin>>n;
    short* k=nullptr;
    k=new short[n];
    massiv(k,n);
    delete[] k;/*

    /*Объявить сущность и описать её свойства. Объявить динамический массив
    сущностей. Реализовать функцию, которая изменяет значения элемента (структура)
    массива. Заполнить атрибуты числовыми и текстовыми значениями (диапазон
    значений определить самостоятельно)*/

    int j=0;
    cin>>j;
    Book* m=nullptr;
    m=new Book[j];
    for (int i=0;i<j;i++){
        obj (m,i);
        cout<<"Pages:"<<m[i].page<<";Genre:"<<m[i].genre<<";Author:"<<m[i].author<<endl;
    }
    delete[] m;
}

void slosh(short* &v, short* &c){
    short i;
    i=*v+*c;
    cout<<i<<endl;
    i=*v-*c;
    cout<<i<<endl;
    i=*c-*v;
    cout<<i<<endl;
}

void swap(short* &v,short* &c){
    short i;
    i=*v;
    *v=*c;
    *c=i;
    cout<<*v<<endl<<*c<<endl;
}

void massiv(short* k,short n){
    short s;
    for (int i=0;i<n;i++){
        s=rand()%255;
        k[i]=s;
        cout<<i<<"="<<&k[i]<<"="<<s<<endl;
    }
}

void obj (Book* &m,int i){
    int k;
    k=rand()%300;
    m[i].page=k;
    them(m[i].genre);
    people(m[i].author);
}

void them(string &x){
    int r=rand()%3;

    switch (r){
    case 0:{x="Ekshn";break;}
    case 1:{x="Roman";break;}
    case 2:{x="Novela";break;}
    default:{x="err enger";break;}
    }
}
void people (string &y){
    int r=rand()%4;
    switch(r){
    case 0:{y="John Patric";break;}
    case 1:{y="Andy Barton";break;}
    case 2:{y="Sue Peterson";break;}
    case 3:{y="Peter Robinson";break;}
    default:{y="err author";break;}
    }
}

