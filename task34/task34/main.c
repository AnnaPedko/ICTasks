//
//  main.c
//  task34
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//
//16. Виведіть на екран строку за довомогою printf, в якій '\0' зустрічається двічі (наприкінці та всередині), зробіть висновок, як сприймає строки printf.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char *text = "Hell\0o, World!\n";

    printf("Hello, World!\n");
    printf("%s\n",text);

    return 0;
}
