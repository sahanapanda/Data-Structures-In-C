//Traversal Of Array
#include <stdio.h>
int main() {
    int a[100], size, i;
    
    printf("Enter size of Array : ");
    scanf("%d", &size);
    
    printf("Enter elements in the Array : ");
    for (i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }
   
    printf("Elements of the Array are :\n");
    for (i=0; i<size; i++) {
        printf("%d\n ", a[i]);
    }
    
    return 0;
}
