//
//  ICPrintString.c
//  task31
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrintString.h"
#include <string.h>

void printString(char *string, unsigned long stringLength) {
    for ( int i = 0; i<stringLength; ++i) {
        printf("%c\n",string[i]);        
    }
}
