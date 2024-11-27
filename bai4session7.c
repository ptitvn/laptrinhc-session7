#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang:\n ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d:\n ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }
    printf("\n");

    return 0;
}