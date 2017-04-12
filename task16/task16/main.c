//
//  main.c
//  task16
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//4. Поексперіментувати з типами змінних, створити змінні всіх можливих типів в main;

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    char charString = 'A';
    char charNumber = 3;
    signed char signedCharValue = -128;
    unsigned char unsignedCharValue = 255;
    short shortValue = 32767;
    short int shortIntValue = 32765;
    signed short signedShortvalue = -32767;
    signed short int signedShortint = -32765;
    unsigned short unsignedShortValue = 65535;
    unsigned short int unsignedShortIntValue = 65534;
    int intValue = -2147483648;
    signed signedValue = -2147483648;
    signed int signedIntValue = -2147483648;
    unsigned unsignedValue = 4294967295;
    unsigned int unsignedIntValue = 4294967295;
    long longValue = -2147483648L;
    long int longIntValue = 2147483647L;
    signed long signedLongValue = -2147483648L;
    signed long int signedLongInt = -2147483648L;
    unsigned long unsignedLongValue = ULONG_MAX;
    unsigned long int unsignedLongIntValue = ULONG_MAX;
    long long longLongValue = LLONG_MIN;
    long long int longLongIntValue = LLONG_MIN;
    signed long long signedLongLongValue = LLONG_MIN;
    signed long long int signedLongLongIntValue = LLONG_MAX;
    unsigned long long unsignedLongLongValue = ULLONG_MAX;
    unsigned long long int unsignedLongLongIntValue = ULLONG_MAX;
    float floatValue = FLT_MAX;
    double doubleValue = DBL_MAX;
    long double longDoubleValue = LDBL_MAX;
    
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
    printf("unsigned int value = %u\n", unsignedIntValue);
    printf("long value = %li\n", longValue);
    printf("long int value = %li\n", longIntValue);
    printf("signed long value = %li\n", signedLongValue);
    printf("signed long int value = %li\n", signedLongInt);
    printf("unsigned long value = %lu\n", unsignedLongValue);
    printf("unsigned long int value = %lu\n", unsignedLongIntValue);
    printf("long long value = %lli\n", longLongValue);
    printf("long long int value = %lli\n", longLongIntValue);
    printf("signed long long value  = %lli\n", signedLongLongValue);
    printf("signed long long int value = %lli\n", signedLongLongIntValue);
    printf("unsigned long long value  = %llu\n", unsignedLongLongValue);
    printf("unsigned long long int value = %llu\n", unsignedLongLongIntValue);
    printf("float value = %f\n", floatValue);
    printf("double value = %f\n", doubleValue);
    printf("long double value= %Lf\n", longDoubleValue);
    
    return 0;
}
