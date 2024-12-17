#include <stdio.h>

int main(void) {
    double num = 1.0 / 3.0;
    double reconstructed = num * 3.0;

    printf("Original value: %.30e\n", num);
    printf("Reconstructed value: %.30e\n", reconstructed);

    return 0;
}
