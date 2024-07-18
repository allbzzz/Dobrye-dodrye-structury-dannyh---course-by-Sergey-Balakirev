/* 
Хэш-таблицы в С++

Объявите в функции main() объект unique с помощью следующей команды:
std::unordered_set<int> unique;

Добавьте в это неупорядоченное множество следующие числа:
1 2 3 5 7 11 2 3 5 7

P.S. На экран ничего выводить не нужно, только сформировать множество unique.
*/


#include <iostream>
#include <unordered_set>

int main(void)
{
    using namespace std;
    
    unordered_set<int> unique = {1, 2, 3, 5, 7, 11, 2, 3, 5, 7};
    
    __assertion_tests(unique);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}