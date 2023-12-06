/*
Статический массив на С++

Сформируйте в программе следующий массив:
char str_1[] = "Structures data";
Создайте в программе еще один массив символов с именем str_2 и длиной 20. Скопируйте содержимое массива str_1 в массив str_2.

P.S. На экран ничего выводить не нужно, только сформировать массивы в соответствии с заданием.
*/

#include <iostream>

int main(void)
{
    using namespace std;
    char str_1[] = "Structures data";
    char str_2[20];
    
    for (int i = 0; i < 20; i++) {
        str_2[i] = str_1[i];
    }
    
    __assertion_tests(str_1, str_2);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}