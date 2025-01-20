#include <stdio.h>

int main() {
    int given_number;
    printf("Enter a number!\n");
    scanf("%d", &given_number);

    if (given_number == 0) {
        printf("0 is neither even nor odd\n");
    } else if (given_number % 2 == 0) {
        printf("%d is an even number\n", given_number);
    } else {
        printf("%d is an odd number\n", given_number);
    }
    return 0;
}