//
//  main.c
//  task25
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//4. Створити функцію, що приймає як параметри два цілих числа, яка б виводила на екран слово "мама", якщо значення першого параметру більше другого, "папа" - якщо менше. Імплементація має бути виконанана за допомогою тернарного оператору.


#include <stdio.h>
#include "ICPrintMamaPapa.h"

int main(int argc, const char * argv[]) {
    ICPrintMamaPapa(2,4);
    ICPrintMamaPapa(7,5);
    ICPrintMamaPapa(0,0);
    
    return 0;
}
