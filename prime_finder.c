#include <stdio.h>
#include <stdlib.h>

#define PRIME_NUMBER(n) (prime_number(n))

int prime_number(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s num1 num2\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 < 1 || num2 < num1) {
        printf("Recheck input.\n");
        return 1;
    }

    printf("Prime numbers in the range from %d to %d:", num1, num2);

    for (int i = num1; i <= num2; i++) {
        if (PRIME_NUMBER(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
