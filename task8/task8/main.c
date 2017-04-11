//
//  main.c
//  task8
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//8. Зробити так, щоб після виклику ICPrint виводилось не "Hello, world!", а "Hello, mama!";

#include <stdio.h>

void ICPrint();

int main(int argc, const char * argv[]) {
    ICPrint();
    
    return 0;
}

//ICPrint() writes the C string pointed by format to the standard output (stdout).

void ICPrint() {
    printf("Hello, mama!\n");
}
