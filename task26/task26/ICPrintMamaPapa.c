//
//  ICPrintMamaPapa.c
//  task25
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICPrintMamaPapa.h"
#include "ICPrintMamaPapa.h"

void ICPrintMamaPapa(int mama,int papa) {
    char* parentsValue;
    
        if (mama > papa)
            parentsValue = "Mama";
        else parentsValue = "Papa";
    
    printf("%s\n", parentsValue);
    
}
