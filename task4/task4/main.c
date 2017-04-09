//
//  main.c
//  task4
//
//  Created by Anna P. on 10.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//4. Додати декларацію ICPrint перед main та перевірити, чи програма працює;

#include <stdio.h>

void ICPrint();

int main(int argc, const char * argv[]) {
    ICPrint();
    
    return 0;
}

void ICPrint() {
    printf("Hello, World!\n");
}

