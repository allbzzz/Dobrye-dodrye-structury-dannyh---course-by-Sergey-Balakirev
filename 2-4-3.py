"""
Пусть в программе имеется следующий список значений температуры по дням (в общем случае состоит из n значений):

t = [-27, -23, -20, -12, -8]
Необходимо после значения -23 вставить значение -22.

Выведите на экран (в консоль) число операций с позиции Big O, необходимых для вставки этого нового значения.

P.S. Вывод нужно делать в формате: 1 - для O(1); n - для O(n); log n - для O(log n); n^2 - для O(n^2); n! - для O(n!).
"""


t = [-27, -23, -20, -12, -8]

# здесь продолжайте программу
t.insert(2, -22)

print('n')

