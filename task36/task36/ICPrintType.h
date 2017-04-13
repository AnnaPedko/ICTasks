//
//  Header.h
//  task36
//
//  Created by Anna P. on 13.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#define ICPrintType

#define ICPrintingType(type, formatter)\
    void output_##type(type parameter) {\
        printf(#formatter"\n",parameter);\
}\

#define ICCallPrintingType(type, parameter) \
    output_##type(type parameter)\

