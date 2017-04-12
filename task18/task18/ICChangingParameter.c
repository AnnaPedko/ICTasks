//
//  ICChangingParameter.c
//  task18
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICChangingParameter.h"
#include <stdio.h>

double ICIncrement(double parameter) {
    parameter = parameter + 1;

    return parameter;
}

double ICDecrement(double parameter) {
    parameter = parameter - 1;
    
    return parameter;
}
