#include <iostream>
#include <fstream>
#include <cmath>
#include <array>

using namespace std;

void tabul(float x_min,float x_max,int step,int num){
    double s=0,y=0;
    int sch=0;

    std::fstream file("out.txt", ios::out);

    for (int i=x_min;i<=x_max;i=i+step)
    {
            s=1/((num*num)*(pow(-1,sch)));
            s=s+y;
            num=num+step;
            cout<<i<<"="<<s<<endl;
            sch=sch+1;

            file<<s<<endl;

    }

}



struct Polet
{
    int x;
    int y;
    int action;
};

int main()
{
    //Реализовать чтение ID3v1 MP3-файла. Будьте внимательны( не все MP3-файлы содержат заполненный ID3-тег): Альбом

    /*char buff[1024];
    fstream fin,fout;
    fin.open("data_samples/1.mp3", ios::in|ios::binary);
    if (!fin.is_open()) {cout<<"opening file error"; return 1;};
     int offest=21;
     int fieldsize=offest+9;
     int i=offest;

     fin.read(buff,1024);
     fin.close();
     for(i;i<fieldsize;i++) cout<<buff[i];
    file.close();*/

    /*Задача 3c.Протабулировать функцию. Начальную и финальную точки, шаг, параметр Ч
    считывать из файла in.txt. Результат записывать в текстовый файл out.txt.*/

    /*int x_min,x_max,step,num;
    std::fstream file("in.txt", ios::in);
    if (!file.is_open())
        cout<<"error";
    file>>x_min>>x_max>>step>>num;
    tabul (x_min,x_max,step,num);
    file.close();*/

    /*Разработать программу для считывания полётных данных о квадрокоптерах из
    файла. Одна строка содержит: Х,У,Команда, где ХУ – координаты, а Команда – это
    набор чисел, характеризующих действие коптера: 10 – взлёт, 20 – посадка, 50 –
    полёт, 60 – набрать высоту, 70 снизить высоту. Каждая новая строка содержит
    новый набор координат и команд. Организовать переменные для хранения
    информации*/










}







