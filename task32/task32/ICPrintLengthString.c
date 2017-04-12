//
//  ICPrintLengthString.c
//  task32
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrintLengthString.h"
#include <string.h>

void ICPrintLengthString(char *string) {
    unsigned long strLength;
    
    if (string[strLength=strlen(string)] == '\0') {
        printf("String length = %lu\n", strLength);
    } else {
        printf("String is not null-terminated\n");
    }
}

