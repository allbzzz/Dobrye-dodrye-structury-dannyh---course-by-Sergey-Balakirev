/* Динамический массив на С++
В программе определен динамический массив, в который заносятся данные из входного потока:

#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;
	vector<char> ar;

	char x;
	while (!feof(stdin)) {
		cin >> x;
		ar.push_back(x);
	}

	// здесь продолжайте программу

	return 0;
}
Используя оператор [], допишите эту программу так, чтобы она выводила на экран в одну строчку через пробел 
второй и шестой элементы этого массива (нумерация при счете начинается с единицы).
*/



#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;
	vector<char> ar;

	char x;
	while (!feof(stdin)) {
		cin >> x;
		ar.push_back(x);
	}

	std::cout << ar[1] << " " << ar[5];

	return 0;
}