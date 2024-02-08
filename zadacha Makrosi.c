

#include <stdio.h>

#define ARR5_PRINT(name, vartype) \
    vartype name[5];              \
    for (int z = 0; z < 5; z++)   \
        printf("El[%d]:%d\n", z, name[z]);

#define BIGGER(a, b) (a > b) ? a : b;

#define INFO(p) printf("\n%s = %d File:%s (Line:%d)", #p, p, __FILE__, __LINE__);

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

#define SWAP(A, B, TYPE) \
    TYPE c;              \
    c = A;               \
    A = B;               \
    B = c;

DEFINE_COMMAND(test, print)
{
    printf("test\n");
}

DEFINE_COMMAND(test, name)
{
    printf("name\n");
}

#define SORT(ARRAY, SIZE, TYPE, COMPARE)            \
    for (int i = 0; i < SIZE; i++)                  \
    {                                               \
        for (int j = 0; j < SIZE - i - 1; j++)      \
        {                                           \
            if (ARRAY[j] COMPARE ARRAY[j + 1])      \
            {                                       \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            }                                       \
        }                                           \
    }

int main()
{
    ARR5_PRINT(test, int)
    ARR5_PRINT(test2, char)

    int z = BIGGER(2, 5)
        printf("%d is bigger", z);

    INFO(z)

    COMMAND(test, print)
    ();
    COMMAND(test, name)
    ();

    int tst = 15, tst2 = 4;
    SWAP(tst, tst2, int)
    printf("\n\n%d", tst);

    SORT(test, 5, int, >)
    for (int k = 0; k < 5; k++)
    {
        printf("\n%d", test[k]);
    }

    SORT(test, 5, int, <)
    for (int k = 0; k < 5; k++)
    {
        printf("\n%d", test[k]);
    }
}