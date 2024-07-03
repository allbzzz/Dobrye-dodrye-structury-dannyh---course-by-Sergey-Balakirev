/* Динамический массив на С++

В программе объявлен динамический массив, в который заносятся данные из входного потока:
vector<short> ar_sh;

short x;
while (!feof(stdin)) {
	cin >> x;
	ar_sh.push_back(x);
}
Вставьте в этот массив третий по счету элемент со значением 5 (счет начинается с единицы) и удалите два последних элемента.
Выведите на экран полученные значения массива ar_sh в одну строчку через пробел.
*/



#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;

    vector<short> ar_sh;

    short x;
    while (!feof(stdin)) {
    	cin >> x;
    	ar_sh.push_back(x);
    }

    auto iter = ar_sh.cbegin();
    ar_sh.insert(iter + 2, 5); 
    
    ar_sh.pop_back();
    ar_sh.pop_back();
    
    for (int i = 0; i < ar_sh.size(); ++i) {
        std::cout << ar_sh[i] << " ";
    }

    return 0;
}