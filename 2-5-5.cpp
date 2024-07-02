/* Динамический массив на С++

Определите в программе динамический массив (как объект класса vector) с именем buffer, который бы хранил данные типа char (байты). 
Начальный физический размер этого массива должен состоять из 512 байт.
После этого занесите в массив buffer первые 25 байт в виде следующей строки (без кавычек и символы в buffer должны идти в том же порядке, что и в строке):
"methods: size; push_back;"

Используя соответствующие методы динамического массива, выведите на экран два числа в одну строчку через пробел: число записанных данных и физический размер массива buffer.
*/



#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    std::vector<char> buffer;
    buffer.reserve(512);
    string str = "methods: size; push_back;";
    for (int i = 0; i < 25; ++i) {
        buffer.push_back(str[i]);
    } 
    
    std::cout << buffer.size() << " " << buffer.capacity();

    __assertion_tests(buffer);    // эту строчку не убирать (должна стоять перед return 0)
    return 0;
}
