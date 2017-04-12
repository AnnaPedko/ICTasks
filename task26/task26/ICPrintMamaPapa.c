//
//  ICPrintMamaPapa.c
//  task25
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrintMamaPapa.h"
#include "ICPrintMamaPapa.h"

void ICPrintMamaPapa(int mamaValue,int papaValue) {
    char* parentsValue;
    char* mamaString = "Mama";
    char* papaString = "Papa";
    
        if (mamaValue > papaValue) {
            parentsValue = mamaString ;
        }
        else {
            parentsValue = papaString;
        }
    
    printf("%s\n", parentsValue);
    
}
