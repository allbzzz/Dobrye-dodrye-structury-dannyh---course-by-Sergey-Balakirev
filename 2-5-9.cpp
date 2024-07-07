/* Динамический массив на С++

Вам необходимо реализовать неравномерную таблицу из оценок студентов, как показано на рисунке
Здесь каждая строчка таблицы является динамическим массивом: marks[0], marks[1], ... marks[9]. Всего в таблице 10 строчек.
Следовательно, в программе нужно объявить массив размером в 10 элементов, состоящий из динамических массивов:
vector<char> marks[10];
Занесите в первые 6 строчек таблицы оценки, показанные на рисунке, в виде целых чисел (а не символов).

P.S. В программе на экран ничего выводить не нужно, только объявить массив marks и заполнить его.
*/



#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    vector<char> marks[10] = {{3, 4}, {2}, {5, 5, 5}, {2, 2, 2, 2, 2}, {1, 3}, {3}};          
  
    __assertion_tests(marks);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}