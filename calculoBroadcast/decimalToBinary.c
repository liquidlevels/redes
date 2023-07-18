#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary: 0");
        return;
    }

    int binary[32];
    int index = 0;

    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal = decimal / 2;
    }

    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}

