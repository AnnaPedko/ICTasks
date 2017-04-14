//
//  ICPrintNumbers.c
//  task41
//
//  Created by Anna P. on 15.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrintNumbers.h"

void ICPrintNumbers(int iteration, int startRange, int endRange) {
    if (startRange < endRange) {
        
        for (int i = startRange; i < endRange; ++i ) {
            if (iteration > 20) {
                printf("Cycle was broken \n ");
                break;
            }
            
            else if (i % 3 == 0) {
                continue;
            }
            
            else if (i == 50) {
                printf("Cycle returned because elmenet = %d\n",i);
                return;
            }
            
            else {
                for (int j = 0; j < iteration; ++j) {
                    printf("%d", i);
            }
                printf("\n");
            }
        }
    }
}
