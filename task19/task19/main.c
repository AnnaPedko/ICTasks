//
//  main.c
//  task19
//
//  Created by Anna P. on 12.04.17.
//  Copyright © 2017 Anna P. All rights reserved.
//

/*6. За допомогою printf протестувати та пояснити, що буде:
- якщо ціле ділять на дробне;
- якщо дробне помножують на ціле;
- якщо ціле ділять на ціле;
- якщо у цілого беруть залишок від цілого (операція %);
- якщо до short додають int;
- якщо записати у менший тип більший тип з великим значенням (наприклад, max з limits.h);*/


#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    
    short shortValue = SHRT_MAX;
    int intValue = 10;
    double doubleValue = 10.1;
    
    printf("якщо ціле ділять на дробне = дробне : %f\n", intValue/doubleValue );
    printf("якщо дробне помножують на ціле = дробне : %f\n", doubleValue * intValue);
    printf("якщо ціле ділять на ціле = ціле : %i\n", intValue/intValue);
    printf("якщо ціле ділять на ціле = ціле : %d\n", intValue/3);
    printf("якщо у цілого беруть залишок від цілого = ціле : %d\n", intValue % intValue);
    printf("якщо до short додають int = ціле : %i\n", shortValue + intValue);
    printf("якщо записати у менший тип більший тип з великим значенням = Warning : %i\n", shortValue = INT_MAX);

    return 0;
}
