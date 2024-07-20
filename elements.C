#include <stdio.h>

int main() {
    int n;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}
