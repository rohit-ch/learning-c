#include <stdio.h>
#include <limits.h>

int main()
{
    printf("char min: %d\n", CHAR_MIN);
    printf("char max: %d\n", CHAR_MAX);
    printf("short min: %d\n", SHRT_MIN);
    printf("short max: %d\n", SHRT_MAX);
    printf("unsigned short max: %d\n", USHRT_MAX);
    printf("int min: %d\n", INT_MIN);
    printf("int max: %d\n", INT_MAX);
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("long min: %ld\n", LONG_MIN);
    printf("long max: %ld\n", LONG_MAX);
    printf("unsigned long min: %lu\n", ULONG_MAX);
    printf("long long min: %lld\n", LLONG_MIN);
    printf("long long max: %lld\n", LLONG_MAX);
    printf("unsigned long long min: %llu\n", ULLONG_MAX);
    return 0;
}
