#include <iostream>
#include <array>
#include <ctime>
using namespace std;

struct Robot{
    int battery;
    int speed;
    int pos;
};

const int N=10, M=10;

int main()
{
    //Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки
    srand(time(0));
    /*int a;

    array<array<int,10>,10> matr;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++){
            matr[i][j]=rand()%10;
        }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    for(int i=0;i<10;i++){
        a=matr[i][1];
        for(int j=0;j<10;j++){
            matr[i][j]*=a;
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }*/

    /*array <array<int, 10>, 10> arr;
        int sum=0;

        for (int i=0; i<10; i++){
            for (int j=0; j<10; j++) {
                arr[i][j]=rand()%20-10;
                cout<<arr[i][j]<<" ";
                if ((arr[i][j]>0) && ((i==j)||(j>i)) && (j%2==0))
                    sum+=arr[i][j];
            }
            cout<<endl;
        }

        cout<<"sum="<<sum<<endl;*/

    //Дана матрица. Элементы первой строки — количество осадков в соответствующий день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
    //(ураган — когда самый сильный ветер был в самый дождливый день).

    /*array <array<int, 10>, 2> days;
    int rain=0, wind=0, count=0;

    for (int i=0; i<2; i++){
        for (int j=0; j<10; j++) {
            days[i][j]=rand()%10;
            cout<<days[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<10; i++){
        if (days[0][i]>rain) rain=days[0][i];
        if (days[1][i]>wind) wind=days[1][i];
    }

    for (int i=0; i<10; i++){
        if ((days[0][i]==rain)&&(days[1][i]==wind)) count++;
    }

        if (count!=0) cout<<"yes\n";
        else cout<<"no\n";*/

    //Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести на экран матрицу, описывающую следующие сущности.
    //Состояние робота на шахматной доске. Робот характеризуется уровнем заряда, скоростью движения.

    /*array<array<Robot, N>, M> desk;

    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++){
            desk[i][j].battery=rand()%255;
            desk[i][j].speed=rand()%255;
            desk[i][j].pos=rand()%2;
        }

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            if (desk[i][j].pos==1)
            {
                cout<<"battery"<<desk[i][j].battery<<
                "speed"<<desk[i][j].speed<<" ";
            }
            else
                cout<<"0 ";
        }
        cout<<endl;
    }*/

    //L бесконечность-норма ||𝐴||𝑖𝑛𝑓 = 𝑚𝑎𝑥1≤𝑖≤𝑀 ∑ |𝑎𝑖𝑗|𝑁 𝑗=1

    array<array<int,N>,M>matr;
    int s,m=0;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            matr[i][j]=rand()%15;
        }
    }

    for(int i=0;i<N;i++)
    {
        s=0;
        for(int j=0;j<M;j++)
        {
            cout<<matr[i][j]<<" ";
            m=matr[i][j]+m;
        }
        if(s<m)
            s=m;
        cout<<"="<<s<<endl;
    }
    cout<<"Ainf="<<s;
}
