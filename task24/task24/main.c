//
//  main.c
//  task24
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//2. Створити функцію, яка б як параметр приймала bool, а повертала строку true або false в залужності від значення параметру.

/*
 Також, є група математичних операцій, яка виконується над числами, результатом яких є bool:
 > - більше - вертає правду, якщо лівий операнд більший за правий;
 >= - більше або дорівнює - вертає правду, якщо лівий операнд більше або дорівнює правому;
 < - менше - вертає правду, якщо лівий операнд менший за правий;
 <= - менше або дорівнює - вертає правду, якщо лівий операнд менше або дорівнює правому;
 != - не дорвінює - вертає правду, якщо лівий операнд не дорівнює правому;
 == - дорвінює - вертає правду, якщо лівий операнд дорівнює правому.
 */


#include <stdio.h>
#include "ICReturnBool.h"

int main(int argc, const char * argv[]) {
    int firstOperand = 10;
    int secondOperand = 15;
    
    printf("%i > %i ->  %s\n", secondOperand, firstOperand, ICReturnBool(secondOperand > firstOperand));
    printf("%i >= %i ->  %s\n", secondOperand, firstOperand, ICReturnBool(secondOperand >= firstOperand));
    printf("%i < %i ->  %s\n", secondOperand, firstOperand, ICReturnBool(secondOperand < firstOperand));
    printf("%i < %i ->  %s\n", firstOperand, secondOperand, ICReturnBool(firstOperand < secondOperand));
    printf("%i >= %i ->  %s\n", firstOperand, secondOperand, ICReturnBool(firstOperand >= secondOperand));
    printf("%i <= %i ->  %s\n", firstOperand, secondOperand, ICReturnBool(firstOperand <= secondOperand));
    printf("%i != %i ->  %s\n", firstOperand, secondOperand, ICReturnBool(firstOperand != secondOperand));
    printf("%i == %i ->  %s\n", firstOperand, secondOperand, ICReturnBool(firstOperand == secondOperand));
    printf("%i == %i ->  %s\n", firstOperand, firstOperand, ICReturnBool(firstOperand == firstOperand));

    return 0;
}
