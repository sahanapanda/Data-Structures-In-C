#include <stdio.h>
#define Size 5

int main() {
    int stack[Size];
    int top = -1;
    int element;
    int i;

    // Input
    for(i = 0; i < Size; i++) {
        printf("Enter element: ");
        scanf("%d", &element);

        top++;
        stack[top] = element;
    }

    // Display
    printf("\nStack elements:\n");

    for(i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }

    return 0;
}
