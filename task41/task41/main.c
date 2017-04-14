//
//  main.c
//  task41
//
//  Created by Anna P. on 15.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//18. Для кожного з різновидів циклів створити функцію з трьома параметрами. Перший параметр - скільки разів має бути виведене число з діапазону менше - більше число, де менше - другий параметр, а більше - третій. При цьому, кожне третє число має бути проігноровано буз припинення роботи циклу. Якщо при виводі, якесь число з діапазону дорівнюватиме 50, то ви маєте припинити вийти з функції. Якщо кількість ітерацій при виводі кожного числа з діапазону перевищуватиме 20, тто ви маєте перервати цикл. Наприклад, function(2, 1, 2) (ім'я вигадайте самі), виведе 11\n22\n.

#include <stdio.h>
#include "ICPrintNumbers.h"

int main(int argc, const char * argv[]) {
    ICPrintNumbers(21, 1, 7);
    ICPrintNumbers(5, 1, 8);

    return 0;
}