#include <stdio.h>

int main() {
    int counter, start, finish;
    int total = 0;

    printf("Enter the start point: ");
    scanf("%d", &start);

    printf("Enter the finish point: ");
    scanf("%d", &finish);

    for (counter = start; counter <= finish; ++counter) {
        total = total + counter;
    }

    printf("total is: %d", total);

    return 0;
}