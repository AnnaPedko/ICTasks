//
//  main.c
//  task22
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

/*
 1. Розпишіть, при яких значеннях лівого та правого операнду операцій && та || результатом буде false, а яких - true.
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("True && False = %d\n",1 && 0);
    printf("True && True = %d\n", 1 && 1);
    printf("False && False = %d\n", 0 && 0);
    printf("False && True = %d\n", 0 && 1);
    
    printf("True || False = %d\n",1 || 0);
    printf("True || True = %d\n", 1 || 1);
    printf("False || False = %d\n", 0 || 0);
    printf("False || True = %d\n", 0 || 1);
    
    return 0;
}
