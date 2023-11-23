/*
Статический массив на С++
Создайте в программе в функции main() статический массив с именем ar, состоящий из 15 элементов типов int, используя следующий синтаксис:

<тип элементов> <имя массива>[размер массива];

Затем, во все элементы занесите значение -1. После этого в пятый по счету элемент (счет начинается с единицы) запишите число 100.

P.S. На экран ничего выводить не нужно, только сформировать массив в соответствии с заданием.
*/

#include <iostream>

int main(void)
{
    using namespace std;
    // здесь пишите программу
    int ar[15];
    
    for (int x = 0; x < 15; ++x)
        ar[x] = -1;
    
    ar[4] = 100;
    
    __assertion_tests(ar);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}