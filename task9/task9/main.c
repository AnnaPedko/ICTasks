//
//  main.c
//  task9
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//9 Поставити return 0 в кожній зі строчок (одна за раз) в main та подивитись, до якого результату це призведе, пояснити, чому;

#include <stdio.h>

void ICPrint();

int main(int argc, const char * argv[]) {
    return 0;
    ICPrint();
    return 0;
    
    return 0;
}

//ICPrint() writes the C string pointed by format to the standard output (stdout).

void ICPrint() {
    printf("Hello, mama!\n");
}
