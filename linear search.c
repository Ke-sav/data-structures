#include <stdio.h>
int main() 
{
    int a[100], i, se, n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the search element:\n");
    scanf("%d", &se);
    for (i = 0; i < n; i++) {
        if (se == a[i]) {
            printf("Element %d found at index %d\n", se, i);
            return 0; 
        }
    }
    printf("Element not found.\n");
    return 0;
}
