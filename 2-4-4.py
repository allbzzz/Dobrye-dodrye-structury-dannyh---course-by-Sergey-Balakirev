"""
Пусть в программе имеются два списка котировок доллара по отношению к рублю:

usd_rub1 = [68.5, 69.1, 70.2, 71, 69.54]
usd_rub2 = [60.1, 62.7, 62.5, 65.6]
Будем полагать, что первый список usd_rub1, в общем случае, содержит n значений, а второй usd_rub2 - m значений.

Сформируйте список с именем usd_rub, состоящий из объединенных элементов списка usd_rub2 и usd_rub1 (порядок элементов должен быть именно такой: сначала элементы списка usd_rub2, а затем - usd_rub1).

Выведите на экран (в консоль) число операций с позиции Big O, необходимых для объединения этих списков в один.

P.S. Вывод нужно делать в формате: 1 - для O(1); n - для O(n); m - для O(m); n+m - для O(n+m); n*m - для O(n*m);
"""


usd_rub1 = [68.5, 69.1, 70.2, 71, 69.54]
usd_rub2 = [60.1, 62.7, 62.5, 65.6]

# здесь продолжайте программу
usd_rub = usd_rub2 + usd_rub1

print('n+m')

