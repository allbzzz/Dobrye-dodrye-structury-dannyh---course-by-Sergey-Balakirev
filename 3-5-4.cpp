/*  Класс list двусвязного списка библиотеки STL языка С++

Создайте в программе (в функции main) объект двусвязного списка с помощью команды:
std::list<short> lst;

В этот список из входного потока необходимо занести числа с помощью следующего программного кода:
short x;
while (!feof(stdin)) {
	cin >> x;
	lst.push_back(x);
}

Выведите на экран в одну строчку через пробел по порядку значения элементов списка lst через один, начиная с первого.
*/



#include <iostream>
#include <list>

int main(void)
{
    using namespace std;
    list<short> lst;

    short x;
    while (!feof(stdin)) {
	cin >> x;
	lst.push_back(x);
    }

    int i = 0;
    for (auto iter = lst.cbegin(); iter != lst.cend(); ++iter, ++i) {
        if (i % 2 == 0)
            cout << *iter << " ";
    }

    return 0;
}