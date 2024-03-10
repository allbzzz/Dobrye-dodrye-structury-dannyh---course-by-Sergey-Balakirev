/*
Статический массив на С++

Пусть массив с целочисленными значениями содержит оценки студента:
char marks[] = {5, 4, 2, 2, 2, 3};
Вычислите среднее арифметическое этих оценок и сохраните результат в вещественной переменной (типа double) с именем m_avr.

P.S. На экран ничего выводить не нужно, только сформировать массив и вычислить значение переменной m_avr в соответствии с заданием.
*/

#include <iostream>

int main(void)
{
    using namespace std;
    char marks[] = {5, 4, 2, 2, 2, 3};
    int len_marks = sizeof(marks) / sizeof(marks[0]);
    int sum_marks = 0;
    for(int i = 0; i < len_marks; i++) {
        sum_marks += marks[i];
    }
    double m_avr = sum_marks / len_marks;

    __assertion_tests(marks, m_avr);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}