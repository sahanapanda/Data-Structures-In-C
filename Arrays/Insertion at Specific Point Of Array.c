//Insertion at Specific Point Of Array
#include <stdio.h>
int main() {
    int a[100], size, i, element, position;
    
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
        
        printf("Enter position to add the element : ");
        scanf("%d", &position);
        
        if (position <= 0 || position > size+1) {
            printf("Invalid Position selected. Position must be between 1 - %d", size);
        }
        
        else {
            for(i=size-1; i>=position-1; i--){
                a[i+1] = a[i];
            }
            a[position -1] = element;
            size++;
            
            printf("Modified Array :\n");
            for(i=0; i<size; i++) {
                printf("%d ", a[i]);
            }
        }
    }
    return 0;
}
