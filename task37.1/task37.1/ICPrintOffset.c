//
//  ICPrintOffset.c
//  task37.1
//
//  Created by Anna P. on 13.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrintOffset.h"
#include "ICDifferentTypesStruct.h"
#include <stddef.h>

#define ICPrintOffsetMacro(structName, structMember)\
    printf("position of "#structMember" = %lu\n",offsetof(structName, structMember));

void ICPrintOffset() {
    ICPrintOffsetMacro(DifferentTypes, boolValueA);
    ICPrintOffsetMacro(DifferentTypes, boolValueB);
    ICPrintOffsetMacro(DifferentTypes, boolValueC);
    ICPrintOffsetMacro(DifferentTypes, boolValueE);
    ICPrintOffsetMacro(DifferentTypes, boolValueF);
    ICPrintOffsetMacro(DifferentTypes, boolValueD);
    ICPrintOffsetMacro(DifferentTypes, intValue);
    ICPrintOffsetMacro(DifferentTypes, doubleValue);
    ICPrintOffsetMacro(DifferentTypes, floatValue);
    ICPrintOffsetMacro(DifferentTypes, shortValueA);
    ICPrintOffsetMacro(DifferentTypes, shortValueB);
    ICPrintOffsetMacro(DifferentTypes, shortValueC);
    ICPrintOffsetMacro(DifferentTypes, longLongValue);
    ICPrintOffsetMacro(DifferentTypes, charPointer);
}
