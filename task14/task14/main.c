//
//  main.c
//  task11
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

/*6. Створити ще один файл,в якому би знаходилось дві функції:
- друкує строку "1234567890";
- друкує строку "0987654321.

Ім'я обрати самостійно і дял функції, і для файлу. Одну з функцій обгорнути наступними строками, а іншу - ні:*/

#include <stdio.h>
#include "ICPrinting.h"
#include "ICPrintString.h"

int main(int argc, char **argv) {
    ICPrint();
    ICPrintParents();
    ICPrintingString();
    ICPrintString();
    
    return 0;
}
