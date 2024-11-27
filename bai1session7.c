#include<stdio.h>
int main(){
    int arr[10];
    int n = 10;
    for (int i = 0; i < n; i++){
        arr[i] = i * 2;
    }
    printf("cac phan tu cua mang \n");
    for (int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }
    printf("\ndo dai cua mang %d\n",n);

    return 0;
}