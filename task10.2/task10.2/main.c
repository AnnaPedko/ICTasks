//
//  main.c
//  task10.2
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//10. Створити нову функцію, ICPrintParents, яка б викликала ICPrint та сама виводила "Hello, papa!", викликати цю функцію з main, поексперіментувати зі взаєморозташування ICPrintParents відносно ICPrint та main, спробувати варіанти з використанням декларацій та без, розповісти, які варіанти розташування спробували та я кі з них спрацювали, а які - ні.

#include <stdio.h>

void ICPrint();
void ICPrintParents();

void ICPrintParents() {
    ICPrint();
    
    printf("Hello, papa!\n");
}

int main(int argc, const char * argv[]) {
    ICPrintParents();
    
    return 0;
}

void ICPrint() {
    printf("Hello, mama!\n");
}
