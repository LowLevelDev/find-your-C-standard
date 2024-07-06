#include <stdio.h>

int main() {
    #ifdef __cplusplus
        printf("C++\n");
    #else
        printf("C\n");
    #endif
    
    #ifdef __STDC_VERSION__
        printf("C-standard-version: %ld\n", __STDC_VERSION__);
    #else
        printf("C-standard-version: Pre-ANSI C\n");
    #endif
    
    return 0;
}

// the __STDC_VERSION__ macro is defined in C99 AND is NOT FOR C++ environments(most)
