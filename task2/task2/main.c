//
//  main.c
//  task2
//
//  Created by Anna P. on 10.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//2. Винести виклик printf у окрему функцію ICPrint, яка б нічого не приймала та не повертала, а вже її викликати в main, при цьому хай її імплементація буде до main написана;


#include <stdio.h>

void ICPrint() {
    printf("Hello, World!\n");
}

int main(int argc, const char * argv[]) {
    ICPrint();
    
    return 0;
}
