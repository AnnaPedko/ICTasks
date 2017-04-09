//
//  main.c
//  ICTasks
//
//  Created by Anna P. on 09.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

#include <stdio.h>



int main(int argc, const char * argv[]) {
  
    printf("Outout character = %c\n", 'A');
    printf("Integer = %d\n", 5);
    printf("Negative integer = %d%3.i, %3.i\n", -5, -6, -7);
    printf("Integer with sign = %+d, %+d\n", -4, 5);
    printf("Float with sign = %+f, %+f\n", -4.0, 5.0);
    printf("Integer = %d\tString = %s\tChar=%c\tDouble = %f\n", 4, "Test", 'I', 5.0);
    
    return 0;
}

