//
//  main.c
//  task33
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//14. Запишіть у строку фіксованої довжини строку меншої довжини (char text[10] = "Hi";) та більшої двожини та виведіть на екран всю строку.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char text[10] = "Hello";
    char text2[10] = "Hi,my name is Anna";
    
    printf("%s\n",text);
    printf("%s\n",text2);
    
    return 0;
}
