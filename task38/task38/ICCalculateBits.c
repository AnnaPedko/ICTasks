//
//  ICCalculateBits.c
//  task38
//
//  Created by Anna P. on 14.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICCalculateBits.h"
#include <stdio.h>

void ICCalculateBits(int intValue) {
    printf("Number = %d\n", intValue);
    int arrayElements[sizeof(intValue) * 8];
    int i = 0;
    
    while (intValue!=0) {
        arrayElements[i] = intValue&1;
        ++i;
        intValue = intValue >> 1;
    }
    for(int k = i - 1; k >=0; --k ) {
        printf("%d", arrayElements[k]);
    }
    printf("\n");
}


