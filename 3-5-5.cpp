/*  Класс list двусвязного списка библиотеки STL языка С++

Создайте в программе (в функции main) объекты двусвязного списка и динамического массива с помощью команд:
std::list<unsigned int> lst;
std::vector<unsigned int> ar_d;

Добавьте по порядку в список lst следующие числа:
1 2 3 5 7 11 13 17 19 23
То есть, первый элемент должен содержать число 1, второй - 2 и т.д.

Перед функцией main() объявите функцию со следующей сигнатурой:
void copy_to_array(std::vector<unsigned int>& dest, const std::list<unsigned int>& src)
{
}

Допишите функцию copy_to_array() так, чтобы она копировала значения элементов списка src в динамический массив dest.
Вызовите функцию copy_to_array() в функции main() для копирования в динамический массив ar_d списка lst. 

P.S. На экран ничего выводить не нужно.
*/



#include <iostream>
#include <list>
#include <vector>

void copy_to_array(std::vector<unsigned int>& dest, const std::list<unsigned int>& src)
{
    dest.resize(src.size());
    copy(src.begin(), src.end(), dest.begin()); 
}

int main(void) {
    using namespace std;
    std::list<unsigned int> lst = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23};
    std::vector<unsigned int> ar_d;
    
    copy_to_array(ar_d, lst);

    __assertion_tests(lst, ar_d);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}