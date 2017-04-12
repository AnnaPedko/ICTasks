//
//  ICPrintingParemeters.c
//  task17
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrintingParemeters.h"
#include <stdio.h>
#include <ctype.h>

void ICPrintIntValue(long long int intValue){
    printf("Integer value = %lli\n",intValue);
    
}
void ICPrintDoubleValue(long double doubleValue){
    printf("Double value = %Lf\n",doubleValue);

}
void ICPrintCharValue(char charValue){
    if (isalpha(charValue)) {
        printf("CharValue = %c\n",charValue);
    } else {
        printf("CharValue = %hhi\n",charValue);
    }

}
void ICPrintStringValue(char* stringValue){
    printf("StringValue = %s\n",stringValue);

}
