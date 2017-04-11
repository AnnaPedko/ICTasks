//
//  ICUnsignedRangeCalculation.c
//  task15
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICUnsignedRangeCalculation.h"
#include <stdio.h>

void ICUnsignedRangeCalculation(long long int minValue, long long int maxValue) {
    if (minValue < 0 && maxValue > 0 ) {
        
        signed long long int sum = minValue + maxValue;
    
        if (sum == -1) {
            unsigned long long int maxUnsignedValue = maxValue * 2 + 1;
            printf("Unsigned range is [%d, %llu]\n", 0, maxUnsignedValue );
        }
        else {
            printf("Range is not correct\n");
        }
    }
    else {
        printf("Range is not correct\n");
        }
}
