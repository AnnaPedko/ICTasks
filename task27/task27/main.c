//
//  main.c
//  task27
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//7. Зробити присвоювання в операторі if (наприклад, if (a = 1)). Пояснити, чому завжди варто ставити на перше місце не змінну, а постійне значення.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int firstValue;
    
    if((firstValue=9))
        printf("Value = %i\n",firstValue);
        
    return 0;
}
