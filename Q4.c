#include <stdio.h>

void updateValue(int a) {
    a = 85;
}

void updateReference(int *a) {
    *a = 85;
}

int main() {
    int num = 80;
    updateValue(num);
    printf("Before updateValue: %d\n", num);
    printf("After updateValue: %d (no change)\n", num);
    printf("Before updateReference: %d\n", num);
    updateReference(&num);
    printf("After updateReference: %d (update successfully)", num);
    return 0;
}