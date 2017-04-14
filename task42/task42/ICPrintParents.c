//
//  ICPrintParents.c
//  task42
//
//  Created by Anna P. on 15.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrintParents.h"
void ICPrintPapa() {
    printf("papa");
}

void ICPrintMama() {
    printf("mama");
}

void ICPrintParents(int parameter) {
    if (parameter % 3 == 0){
        ICPrintMama();
    }
    if (parameter % 5 == 0) {
        ICPrintPapa();
    }
    printf("\n");
    

}
