//Insertion at End Of the Array
#include <stdio.h>
int main() {
    int a[100], size, i, element;
    
    printf("Enter size of Array : ");
    scanf("%d", &size);
    
    if (size <= 0 || size > 100) {
        printf("Overflow Condition. Size must be between 1-100");
    }
    
    else {
        printf("Enter elements in the Array : ");
        for (i=0; i<size; i++) {
            scanf("%d", &a[i]);
        }
        printf("Enter element to add into the Array : ");
        scanf("%d", &element);
        
        for(i=0; i<size; i++){
        }
        a[size] = element;
        size++;
            
        printf("Modified Array :\n");
        for(i=0; i<size; i++) {
            printf("%d ", a[i]);
        }
    }
