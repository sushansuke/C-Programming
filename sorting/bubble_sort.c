
#include <stdio.h>

int main() {
    int a[] = {5, 3, 8, 2, 1};
    int n = 5, temp;
    printf("\n Unsorted Array");
    for(int c =0;c<5;c++)
      printf(" %d ",a[c]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
