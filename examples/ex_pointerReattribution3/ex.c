#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

struct big_str
{
    uint64_t a;
    uint64_t b;
    uint64_t c;
    uint64_t d;
    uint64_t e;
    uint64_t f;
    uint64_t g;
    uint64_t h;
    uint64_t i;
    uint64_t j;
    uint64_t k;
};

struct big_str state[16] = {
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  {1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  {3, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {4, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  {5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {6, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  {7, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {8, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  {9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {14, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};

int main()
{
    int a = 0;
    int b = 4;
    a = b + 3;
    printf("%i \n", a);
    for(int i = 15; i >= 0; i--)
        printf("%" PRIu64 " \n", state[i].a);
    return 0;
}