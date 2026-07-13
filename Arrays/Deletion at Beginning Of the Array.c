//Deletion at Beginning Of the Array
#include <stdio.h>
int main() {
    int a[100], size, i;
    
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
   
        printf("Modified Array :\n");
        for(i=1; i<size; i++) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
