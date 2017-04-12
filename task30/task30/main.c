//
//  main.c
//  task30
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//10. Записати у масів фіксованої довжини більше елементів (int values[3] = {1, 2, 3, 4, 5};) та менше елементів. Вивести на екран.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int values[3] = {1, 2, 3, 4, 5};
    
    for (int i = 0;i < 5; i++) {
        printf("element[%i] = %i\n", i, values[i]);
    }
    
    return 0;
}
