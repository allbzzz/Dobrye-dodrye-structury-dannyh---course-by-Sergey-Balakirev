/* 
Хэш-таблицы в С++

Объявите в функции main() объект db с помощью следующей команды:
std::unordered_map<std::string, short> db;

Добавьте в хэш-таблицу db следующие данные, представленные в формате "ключ: значение":
"one": 1
"four": 4
"five": 5
"even": 2

Затем, удалите из хэш-таблицы db ключ "four".

P.S. На экран ничего выводить не нужно, только сформировать хэш-таблицу db в соответствии с заданием подвига.
*/



#include <iostream>
#include <unordered_map>

int main(void)
{
    using namespace std;
    
    unordered_map<std::string, short> db;
    
    db.insert(make_pair("one", 1));
    db.insert(make_pair("four", 4));
    db.insert(make_pair("five", 5));
    db.insert(make_pair("even", 2));

    auto it = db.erase("four");

    __assertion_tests(db);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}