//
//  main.c
//  task43
//
//  Created by Anna P. on 15.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//озбити цей код на декілька змінюючих математичних операцій такий, щоб при мінімальній кількості змінних додаткових було якомого більше строк коду (в ідеалі, по одній строці на одну математичну операцію):
/*Код:
double doubleResult = 3.0;
doubleResult = doubleResult * doubleResult / 4 % 7 + 4.0 * doubleResult - 1.5 + ‘A';*/


#include <stdio.h>

int main(int argc, const char * argv[]) {
    double doubleResult = 3.0;
    doubleResult *= doubleResult;
    doubleResult /= (4 % 7);
    doubleResult += 4.0 * doubleResult;
    doubleResult -= -1.5;
    doubleResult += 'A';
    
    printf("Result = %f\n",doubleResult);
    return 0;
}
