/* Динамический массив на С++

Пользователь вводит с клавиатуры натуральное число (тип int), используя следующие команды:
int digit;
cin >> digit;
Необходимо найти все делители введенного числа digit и сохранить их в динамическом массиве с именем divs
(элементы массива должны иметь тип int, а делители добавлять в конец массива в порядке возрастания значений).

Выведите на экран в одну строчку через пробел все найденные делители, начиная с числа 1 и заканчивая самим числом.
*/



#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    int digit;
    std::cin >> digit;

    std::vector<int> divs;
    for (int i = 1; i <= digit; ++i) {
        if (digit % i == 0) {
            divs.emplace_back(i);
        }
    }
    for (int i = 0; i < divs.size(); ++i) {
        std::cout << divs[i] << " ";
    }

    __assertion_tests(divs, digit);   // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}