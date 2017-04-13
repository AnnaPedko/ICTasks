//
//  ICDifferentTypesStruct.h
//  task37.4
//
//  Created by Anna P. on 13.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#ifndef ICDifferentTypesStruct_h
#define ICDifferentTypesStruct_h
#include <stdbool.h>

typedef struct {
    union {
        struct {
            bool boolValueA : 1;
            bool boolValueB : 1;
            bool boolValueC : 1;
            bool boolValueD : 1;
            bool boolValueE : 1;
            bool boolValueF : 1;
        };
        unsigned char flag;
    };
    
    short shortValueA;
    short shortValueB;
    short shortValueC;
    int intValue;
    float floatValue;
    double doubleValue;
    long long longLongValue;
    char *charPointer;
} DifferentTypes ;

#endif /* ICDifferentTypesStruct_h */
