//
//  main.c
//  task23
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//2. Створити функцію, яка б як параметр приймала bool, а повертала строку true або false в залужності від значення параметру.

#include <stdio.h>
#include "ICReturnBool.h"

int main(int argc, const char * argv[]) {
    printf("%s\n",ICReturnBool(true));
    printf("%s\n",ICReturnBool(false));
    
    return 0;
}
