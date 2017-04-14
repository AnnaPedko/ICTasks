//
//  ICDynamicArray.c
//  task39
//
//  Created by Anna P. on 14.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include "ICDynamicArray.h"
#include <stdlib.h>

ICDynamicArray createStruct(unsigned int initialCapacity){
    ICDynamicArray result;
    result.dynamicArray = malloc(initialCapacity * sizeof(int));
    result.length = 0;
    result.capacity = initialCapacity;
    
    return result;
}

void appendElement(ICDynamicArray * result, int element) {
    if (result->length >= result->capacity) {
        result->dynamicArray = realloc(result->dynamicArray, sizeof(int) * (result->capacity + 1));
        ++result->capacity;
    }
    
    result->dynamicArray[result->length] = element;
    ++result->length;
}

void deleteStruct(ICDynamicArray * result) {
    if(result) {
        free(result->dynamicArray);
        result->capacity = 0;
        result->length = 0;
        result->dynamicArray = 0;
    }
}

void deleteElement(ICDynamicArray * result, unsigned int index) {
        if(index < result->length) {
            printf("Element [ %d ] = %d was deleted\n", index, result->dynamicArray[index]);
            for(int k = index; k < result->length - 1; k ++ ) {
                result->dynamicArray[k]=result->dynamicArray[k+1];
            }
            --result->length;
        }
}

void printStruct(ICDynamicArray * result) {
    printf("Capacity = %d\n",result->capacity );
    printf("Length = %d\n",result->length );
    
    for (int i = 0; i<result->length; ++i) {
        printf("Struct element [ %d ] = %d\n", i, result->dynamicArray[i]);
    }
}

