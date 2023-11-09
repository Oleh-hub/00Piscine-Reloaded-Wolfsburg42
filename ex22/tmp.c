#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

#define ABS_NO_TERNARY(x)   \
    do {                    \
        if ((x) < 0) {      \
            -(x);           \
        } else {             \
            (x);            \
        }                    \
    } while (0)

int main() {
    int num = -5;

    int absoluteValue1 = ABS(num);
    int absoluteValue2 = ABS_NO_TERNARY(num);

    printf("Absolute value (with ternary): %d\n", absoluteValue1);
    printf("Absolute value (without ternary): %d\n", absoluteValue2);

    return 0;
}
