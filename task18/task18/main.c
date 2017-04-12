//
//  main.c
//  task18
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//4. Створити функцію ICIncrement та ICDecrement такі, щоб вони приймали на вхід один параметр, а результатом функції була б така ж поведінка, як у ++ та --


#include <stdio.h>
#include "ICChangingParameter.h"

int main(int argc, const char * argv[]) {
    double parameters[10] = {1000.0, 2.0, 3.4, 7.0, 50.0, 6, 7, 8, 0.000,-50};
    
    for (int i = 0; i < 10; ++i){
        printf("Parameter = %f\n , Increment = %f\n",parameters[i],ICIncrement(parameters[i]));
        printf("Parameter = %f\n , Decrement = %f\n",parameters[i],ICDecrement(parameters[i]));
    }
    
    return 0;
}
