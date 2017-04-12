//
//  main.c
//  task31
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//12. Створити функцію дял виводу в консоль нуль термінованою та нуль нетермінованої строки посимвольно (використовувати дял цього printf, який виводить 1 char за одну ітерацію циклу).

#include <stdio.h>
#include "ICPrintString.h"
#include <string.h>

int main(int argc, const char * argv[]) {
    char *arrayString[3] = {"Hi!","How are you!","Knowledges" };
    
    for (int i = 0;i < 3; ++i ) {
        printString(arrayString[i], strlen(arrayString[i]));
    }
    
    return 0;
}
