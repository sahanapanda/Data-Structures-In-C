//Insertion at Beginning Of Array
#include <stdio.h>
int main() {
    int a[100], size, i, element;
    
    printf("Enter size of Array : ");
    scanf("%d", &size);
    
    if (size < 0 || size > 100) {
        printf("Overflow Condition");
    }
    
    else {
        printf("Enter elements in the Array : ");
        for (i=0; i<size; i++) {
            scanf("%d", &a[i]);
        }
        printf("Enter element to add into the Array : ");
        scanf("%d", &element);
        
        for(i=size-1; i>=0; i--){
            a[i+1] = a[i];
        }
        
        a[0] = element;
        size++;
        
        printf("Modified Array :\n");
        for(i=0; i<size; i++) {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}
