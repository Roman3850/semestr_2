#include <iostream>
#include <string>

int main()
{
    //Составить алгоритм, находящий, является ли частью данного слова слово “раз”. Ответ должен быть “да” или “нет”
    /*std::string text;
    std::cout<<"write a word\n";
    int pos1 = 'ras';
    std::getline(std::cin,text);
    if (text.find(pos1)!=std::string::npos)
        std::cout<<"There is a match";
    else
        std::cout<<"There is no match";*/

    //По введенному номеру дня недели вывести его название, используя оператор множественного выбора. Нумерация дней недели начинается с 1 – понедельник, 2 — вторник и т. д.
    /*int a;
    std::cout<<"Enter the week number\n";
    std::cin>>a;
    std::string day1,day2,day3,day4,day5,day6,day7;
    day1="monday";
    day2="tuesday";
    day3="wednesday";
    day4="wednesday";
    day5="friday";
    day6="saturday";
    day7="sanday";
    switch (a)
    {
        case 1:
            std::cout<<day1;
            break;
        case 2:
            std::cout<<day2;
            break;
        case 3:
            std::cout<<day3;
            break;
        case 4:
            std::cout<<day4;
            break;
        case 5:
            std::cout<<day5;
            break;
        case 6:
            std::cout<<day6;
            break;
        case 7:
            std::cout<<day7;
            break;
    }*/

    //Дана строка. Удалите k-ый символ в ней
      /*std::string text;
      int a;
      std::cout<<"enter text\n";
      std::getline(std::cin,text);
      std::cout << "enter number: ";
      std::cin >> a;
      text.erase(a-1, 1);
      std::cout << text;*/

    //Дана строка. Если она начинается на 'abc', то заменить их на 'www', иначе добавить в конец строки 'zzz'.
      std::string text;
      std::cout<<"enter text\n";
      std::getline(std::cin,text);
      if ((text.find('a')<1) and (text.find('b')<2) and (text.find('c')<3))
          text.replace(0,3,"www");
      else
          text+="zzz";
      std::cout<<text;


}
