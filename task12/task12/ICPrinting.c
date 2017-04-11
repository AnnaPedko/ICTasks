//
//  ICPrinting.c
//  task11
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrinting.h"

#include <stdio.h>

void ICPrint() {
    printf("Hello, world!\n");
}

void ICPrintParents() {
    ICPrintMama();
    ICPrintPapa();
}

void ICPrintMama() {
    printf("Hello, mama!\n");
}

void ICPrintPapa() {
    printf("Hello, papa!\n");
}
