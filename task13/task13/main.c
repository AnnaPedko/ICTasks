//
//  main.c
//  task11
//
//  Created by Anna P. on 11.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

//2. Розкоментувати строки з завдання 1 та подивити, що буде, якщо в main зробити тричі #include "ICPrinting.h". Пояснити, чому саме таку групу директив препроцессору звуть guard (тобто, охоронець).

#include <stdio.h>
#include "ICPrinting.h"
#include "ICPrinting.h"
#include "ICPrinting.h"

int main(int argc, char **argv) {
    ICPrint();
    ICPrintParents();
    
    return 0;
}
