//
//  ICCalculateDeputyWealth.c
//  task28
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICCalculateDeputyWealth.h"

typedef enum {
    ICThiefState,
    ICHonestState,
    ICAngelState,
    ICHungerStrikeState,
} ICDeputyState;

void ICPrintDeputyState(ICDeputyState icDeputyState) {
    switch(icDeputyState){
        case ICThiefState:
            printf("Thief\n");
            break;
            
        case ICHonestState:
            printf("Honest\n");
            break;
            
        case ICAngelState:
            printf("Angel\n");
            break;
            
        case ICHungerStrikeState:
            printf("Too much honest\n");
            break;
    }
}

void ICCalculateDeputyWealth(int salary,int wealth){
    const int thiefWealth = salary * 1000 * 1000;
    const int honestWealth = salary * 120;
    const int angelWealth = salary * 12;
    
    ICDeputyState deputyState = (wealth == thiefWealth) ? ICThiefState:(wealth == honestWealth) ?
                                ICHonestState: (wealth ==angelWealth) ?ICAngelState : ICHungerStrikeState;
    
    ICPrintDeputyState(deputyState);
}





