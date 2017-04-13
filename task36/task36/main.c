//
//  main.c
//  task36
//
//  Created by Anna P. on 13.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//1. Создать макрос, который бы генерировал метод для вывода в консоль значения любого примитивного типа. У макроса должно быть 2 параметра: тип, спецификатор вывода. При препроцессинге макрос должен создавать метод output_type, где вместо type должен быть подставлен тип, который мы выводим данным сгенерированным методом. Создать второй макрос, который бы занимался вызовом сгенерированного первым макросом метода, на вход должен получать тип метода.


#include <stdio.h>
#include "ICPrintTypes.h"
ICPrintingType(int, %d);

int main(int argc, const char * argv[]) {
    const int value = 5;
    
    ICCallPrintingType(int, value);
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
