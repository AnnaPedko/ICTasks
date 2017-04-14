//
//  ICDynamicArray.h
//  task39
//
//  Created by Anna P. on 14.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#ifndef ICDynamicArray_h
#define ICDynamicArray_h

#include <stdio.h>

typedef struct {
    int* dynamicArray;
    unsigned int length;
    unsigned int capacity;
}ICDynamicArray;

ICDynamicArray createStruct(unsigned int initialCapacity);
void appendElement(ICDynamicArray *,int element);
void deleteStruct();
void deleteElement(ICDynamicArray * result, unsigned int index);
void printStruct(ICDynamicArray * result);
#endif /* ICDynamicArray_h */
