//
//  main.c
//  task15
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//1. Вивести формулу вирахування діапазону беззнакового числа, якщо відомий діапазон знакового цілого числа того ж розміру.

#include <stdio.h>
#include <limits.h>
#include "ICUnsignedRangeCalculation.h"

int main(int argc, const char * argv[]) {
    
    ICUnsignedRangeCalculation(-128, 127);
    ICUnsignedRangeCalculation(LLONG_MIN, 9223372036854775807LL);
    
    return 0;
}
