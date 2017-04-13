//
//  main.c
//  task37
//
//  Created by Anna P. on 13.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//
//1. Создать структуру, данных, хранящую в себе расположенные в случайном порядке 6 bool, 1 float, 1 int, 1 long long, 3 short, 1 double, 1 указатель на строку.



#include <stdio.h>
#include <stdbool.h>

struct DifferentTypes {
    bool boolValueA;
    bool boolValueB;
    bool boolValueC;
    bool boolValueD;
    bool boolValueE;
    bool boolValueF;
    float floatValue;
    int intValue;
    long long longLongValue;
    short shortValueA;
    short shortValueB;
    short shortValueC;
    double doubleValue;
    char *charPointer;
};

typedef struct DifferentTypes DifferenTypes;

int main(int argc, const char * argv[]) {
    DifferenTypes differentTypes;
    printf("%lu\n", sizeof(differentTypes));
    
    return 0;
}
