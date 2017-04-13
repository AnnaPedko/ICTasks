//
//  ICPrintTypes.h
//  task36
//
//  Created by Anna P. on 13.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#ifndef ICPrintTypes_h
#define ICPrintTypes_h

#include <stdio.h>

#define ICPrintingType(type, formatter)\
    void ICOutput_##type(type parameter) {\
        printf("Parameter = "#formatter"\n",parameter);\
}

#define ICCallPrintingType(type, parameter) \
    ICOutput_##type(parameter)\


#endif /* ICPrintTypes_h */
