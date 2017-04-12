//
//  main.c
//  task20
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//
//7. Вивести на екран 10 новостворених змінних різних типів, але нічим їх не ініціалізувати (ніщо в них не писати), пояснити, чому це погано, створювати змінні, нічим їх не цініціалізуючи;

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, const char * argv[]) {
        char charString;
        char charNumber;
        signed char signedCharValue;
        unsigned char unsignedCharValue;
        short shortValue;
        short int shortIntValue;
        signed short signedShortvalue;
        signed short int signedShortint;
        unsigned short unsignedShortValue;
        unsigned short int unsignedShortIntValue;
        int intValue;
        signed signedValue;
        signed int signedIntValue;
        unsigned unsignedValue;
        
        printf("Char string value = %c\n", charString);
        printf("Char number value = %d\n", charNumber);
        printf("signed char value = %hhi\n", signedCharValue);
        printf("unsigned char value = %d\n", unsignedCharValue);
        printf("short value = %hi\n", shortValue);
        printf("short int value = %hi\n", shortIntValue);
        printf("signed short value = %hi\n", signedShortvalue);
        printf("signed short int value = %hi\n", signedShortint);
        printf("unsigned short value = %hu\n", unsignedShortValue);
        printf("unsigned short int value = %hu\n", unsignedShortIntValue);
        printf("int value = %i\n", intValue);
        printf("signed value = %d\n", signedValue);
        printf("signed int value = %i\n", signedIntValue);
        printf("unsigned value = %u\n", unsignedValue);
    
    return 0;
}
