//
//  main.c
//  task17
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//Створити окремі функції для виводу параметрів, типу цілих чисел, дробних чисел, символів, строк та назви параметру у такому фомраті "назва = число"

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "ICPrintingParemeters.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    ICPrintIntValue(INT_MAX);
    ICPrintIntValue(INT_MIN);
    ICPrintCharValue('A');
    ICPrintCharValue(2);
    ICPrintDoubleValue(FLT_MAX);
    ICPrintDoubleValue(LDBL_MAX);
    ICPrintStringValue("Hello, my dear friends!");



    return 0;
}
