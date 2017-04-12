//
//  main.c
//  task29
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//9. Створити масів типу int всіма способами з лекції та вивести на екран, використовуючи цикл while, do..while, for. У випадку while, do..while ітератори та їх збільшення ви матимете створити самостійно.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numberElenments = 5;
    int iterator = 0;
    
    int values[] = {60, 70, 80, 90, 100};
    int * valuesArrayRf = values;
    
    int valuesArray[] = { 10, 20, 30, 40, 50};
    int array[5] = {19, 10, 8, 17, 9};

    while(iterator<numberElenments){
        printf("Array = %s; element[%i] = %i\n","valuesArray", iterator, valuesArray[iterator]);
        printf("Array = %s; element[%i] = %i\n","values", iterator, valuesArrayRf[iterator]);
        printf("Array = %s; element[%i] = %i\n","array", iterator, array[iterator]);

        iterator++;
    }
    
    iterator = 0;
    
    do {
        printf("Array = %s; element[%i] = %i\n","valuesArray", iterator, valuesArray[iterator]);
        printf("Array = %s; element[%i] = %i\n","values", iterator, valuesArrayRf[iterator]);
        printf("Array = %s; element[%i] = %i\n","array", iterator, array[iterator]);
        
        iterator++;
    } while (iterator < numberElenments);
        
        
        
        
    
    
    
    return 0;
}
