//
//  main.c
//  task21
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//8. Використати постфіксний та префіксний інкремент у printf над параметром.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int intValue = 5;
    int postIncrement = intValue++;
    printf("параметр = %i, постфіксний інкремент = %i\n", intValue, postIncrement);
    printf("параметр = %i, префіксний  інкремент = %i\n", intValue, ++intValue);

    return 0;
}
