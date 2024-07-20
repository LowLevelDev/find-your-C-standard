#include <stdio.h>

#ifdef __cplusplus
#define language "C++"
#else
#define language "C"
#endif

#ifdef __STDC_VERSION__
#if __STDC_VERSION__ >= 201710L
#define C_VERSION "C17"
#elif __STDC_VERSION__ >= 201112L
#define C_VERSION "C11"
#elif __STDC_VERSION__ >= 199901L
#define C_VERSION "C99"
#else
#define C_VERSION "Pre-ANSI C"
#endif
#else
#define C_VERSION "Pre-ANSI C"
#endif

int main()
{
  printf("%s\n", language);
  printf("C-standard-version: %s\n", C_VERSION);

  return 0;
}
