//
//  main.c
//  task39
//
//  Created by Anna P. on 14.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include <stdio.h>
#include "ICDynamicArray.h"



int main(int argc, const char * argv[]) {
    
    int elementsArray[5] = {10, 11, 12, 13, 15};
    ICDynamicArray dynamicArray = createStruct(1);
    
    for ( int i = 0; i < 5; ++i) {
        appendElement(&dynamicArray, elementsArray[i]);
    }
    
    printStruct(&dynamicArray);
    deleteElement(&dynamicArray, 0);
    printStruct(&dynamicArray);
    deleteElement(&dynamicArray, 2);
    printStruct(&dynamicArray);
    deleteStruct(&dynamicArray);
    printStruct(&dynamicArray);

    return 0;
}
