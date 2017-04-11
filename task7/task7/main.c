//
//  main.c
//  task7
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//7. Закоментувати англійською мовою, що саме робить функція ICPrint;

#include <stdio.h>

void ICPrint();

int main(int argc, const char * argv[]) {
    ICPrint();
    
    return 0;
}

//ICPrint() writes the C string pointed by format to the standard output (stdout).

void ICPrint() {
    printf("Hello, World!\n");
}


